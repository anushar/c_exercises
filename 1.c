/**
 * @brief The expected output of the following C program is to print the elements in the array. But when actually run, it doesn't do so. 
 * @file 1.c
 */

#include<stdio.h>

#define TOTAL_ELEMENTS (sizeof(array) / sizeof(array[0]))
int array[] = {23,34,12,17,204,99,16};

int main()
{
    int d;

    for(d=-1;d <= (TOTAL_ELEMENTS-2);d++)
        printf("%d\n",array[d+1]);

    return 0;
}
