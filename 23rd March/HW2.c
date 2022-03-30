
// Take a=0x5B & b=0x64 unsigned char and create a new integer 0x645B
#include <stdio.h>
int main()
{
    unsigned char a = 0x5B;
    unsigned char b = 0x64;
    int c = a;
    int d = b << 8;
    int e = c | d;
    printf("%x", e);
    return 0;
}