#include <stdio.h>
int main()
// Qn.02 Billing format:
{
    int p1 = 10, p2 = 120, p3 = 1296, p4 = 5;
    float d1 = 1929.63, d2 = 6.6, d3 = 26.63, d4 = 1964.6543;
    
    printf("Item No.\tName\tPrice");
    printf("\n--------\t----\t-----");
    printf("\n%-8d%12s%5c%8.2f", p1, "akash", 36, d1);
    printf("\n%-8d%12s%5c%8.2f", p2, "ashish", 36, d2);
    printf("\n%-8d%12s%5c%8.2f", p3, "ram", 36, d3);
    printf("\n%-8d%12s%5c%8.2f", p4, "2964df", 36, d4);
    return 0;
}