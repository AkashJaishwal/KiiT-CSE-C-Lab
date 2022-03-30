#include <stdio.h>
// Number System conversion.

int main()
{
    int a,c,b,d,e;
    //Its show the hexadecimal value of Decimal input 
    printf("Enter decimal number");
     scanf("%d",&a);
     printf("Hexadecimal number:%x",a);
     //Its show the octal value of Decimal input
     printf("\n\n\nEnter decimal number");
     scanf("%d",&c);
     printf("octal number:%o",c);
      //Its show the Decimal value of Decimal input
      printf("\n\n\nEnter Decimal number");
      scanf("%d",&b);
      printf("decimal number:%d",b);
      //Its show the Decimal value of Hexadecimal input
      printf("\n\n\nEnter hexadecimal number");
      scanf("%x",&d);
      printf("decimal number:%d",d);
      //Its show the Decimal value of octal input
      printf("\n\n\nEnter octal number");
      scanf("%o",&e);
      printf("decimal number:%d",e);
    return 0; 
}


