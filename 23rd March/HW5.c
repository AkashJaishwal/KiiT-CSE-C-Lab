// 0x5A 34 BD A2
// Cross change the middle two terms and get the output
// 0x5A BD 34 A2
#include <stdio.h>
int main()
{
    int a = 0x5A34BDA2;

    int b = (a & 0xFF0000) >> 8;
    int c = (a & 0xFF00) << 8;
    int d = a & 0xFF0000FF;

    int r = b | c | d;
    printf("The Required Output is\t:%x", r);
}