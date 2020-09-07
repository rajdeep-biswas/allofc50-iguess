#include <stdint.h>

typedef uint8_t BYTE;

typedef struct {
	BYTE firstByte;
	BYTE secondByte;
	BYTE thirdByte;
	BYTE lastByte;
	BYTE otherBytes[508];
} JPEGHEADER;