// Take a=0x46 & b=0x39 to Get the Output 4936
#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    a = 0x46;
    b = 0x39;
    c = (a & 0x00F0) << 8; // 4
    d = (a & 0x000F);      // 6
    e = (b & 0x00F0);      // 3
    f = (b & 0x000F) << 8; // 9

    int result = c | f | e | d;

    printf("%x", result);
}