// Find the 5th and 9th bit of a given integer.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the Integer\t:");
    scanf("%d", &a);
    int b = (a & 0x0010) >> 4;
    printf("5th bit\t: %i", b);
    int c = (a & 0x0100) >> 8;
    printf("\n9th bit\t: %i", c);
}