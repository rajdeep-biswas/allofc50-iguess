/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */

int binary(int a[], int l, int u, int s);

bool search(int value, int values[], int n)
{
    int found = -1;

    for(int i = 0; i < n; i++)
        if(values[i] == value) {
            found = i;
            break;
        }

    if(found == -1)
        return false;
    else
        return true;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int min, found, mark, swap;

    for(int j = 0; j < n; j++) {
        min = values[j];
        found = 0;
        for(int i = j; i < n; i++) {
            if(values[i] < min) {
                min = values[i];
                mark = i;
                found = 1;
            }
        }

        if(found == 1) {
            swap = values[mark];
            while(mark != j) {
                values[mark] = values[mark - 1];
                mark--;
            }
            values[mark] = swap;
        }
    }
    return;
}

int binary(int a[], int l, int u, int s)
{
    int mid = (l + u) / 2;

    if(u < l)
        return -1;

    else if(s < a[mid])
        return binary(a, l, mid - 1, s);

    else if(s > a[mid])
        return binary(a, mid + 1, u, s);

    else
        return mid;
}