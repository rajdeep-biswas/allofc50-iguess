// Resizes a BMP file

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "bmp.h"

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 4)
    {
        fprintf(stderr, "Usage: ./resize scale infile outfile\n");
        return 1;
    }

    // remember filenames
    float n = atof(argv[1]);
    char *infile = argv[2];
    char *outfile = argv[3];

    // open input file
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }

    // open output file
    FILE *outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 3;
    }

    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);

    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 ||
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        fprintf(stderr, "Unsupported file format.\n");
        return 4;
    }

    bi.biWidth = (int)floor(bi.biWidth * n);
    bi.biHeight = (int)floor(bi.biHeight * n);

    // determine padding for scanlines
    int padding = (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;

    printf("padding: %d\n", padding);

    bi.biSizeImage = ((sizeof(RGBTRIPLE) * bi.biWidth) + padding) * abs(bi.biHeight);
    bf.bfSize = bi.biSizeImage + sizeof(BITMAPINFOHEADER) + sizeof(BITMAPFILEHEADER);

    printf("bmpInfoHeader: %lu\nbmpFileHeader: %lu\n", sizeof(BITMAPINFOHEADER), sizeof(BITMAPFILEHEADER));

    // write outfile's BITMAPFILEHEADER
    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
    fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, outptr);

    // not a huge fan of this code. hardcoded to just work for scaling down by a factor of 0.5 and the scale up mostly works for whole numbers.

    // iterate over infile's scanlines
    for (int i = 0, biHeight = abs(bi.biHeight) / n; i < biHeight; i++)
    {
        RGBTRIPLE *values = malloc(sizeof(RGBTRIPLE) * bi.biWidth);
        int valIndex = 0;

        // iterate over pixels in scanline
        for (int j = 0; j < bi.biWidth / n; j++)
        {
            // temporary storage
            RGBTRIPLE triple;

            // read RGB triple from infile
            fread(&triple, sizeof(RGBTRIPLE), 1, inptr);

            // write RGB triple to outfile
            // fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);

            for(int iter = 0; (n < 1 && j % 2 == 0 && iter < n) || (n >= 1 && iter < n); iter++) {
                values[valIndex] = triple;
                valIndex++;
            }
        }

        padding = (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;

        printf("paddington: %d\n", padding);

        for(int iter = 0; (n < 1 && i % 2 == 0 && iter < n) || (n >= 1 && iter < n); iter++) {
            fwrite(values, sizeof(RGBTRIPLE), bi.biWidth, outptr);

            for(int k = 0; k < padding; k++) {
                fputc(0x00, outptr);
            }
        }

        // skip over infile padding (if any)

        padding = (4 - (int)(bi.biWidth / n * sizeof(RGBTRIPLE)) % 4) % 4;

        fseek(inptr, padding, SEEK_CUR);
    }

    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // success
    return 0;
}