// Take a Interger number and display its each Bytes.
#include <stdio.h>
int main()
{
    int a = 0x123456AB;
    int w = (a & 0xFF);
    int x = (a & 0xFF00) >> 8;
    int y = (a & 0xFF0000) >> 16;
    int z = (a & 0xFF000000) >> 24;
    printf("1st Byte\t:%x\n2nd Byte\t:%x\n3rd Byte\t:%x\n4th Byte\t:%x", w, x, y, z);
}