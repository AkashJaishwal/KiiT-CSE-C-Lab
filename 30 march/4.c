#include<stdio.h>
// Qn.04 Take a 5-digit number and display it's middle 3 digit.
int main(){
    int a,b;
    printf("Enter a five digits number: \n");
    scanf("%d",&a);
    if (a>99999)
    {
        printf("Enter just 5 digits number: \n");
    }else if (a<10000)
    {
        printf("Enter 5 digits number");
    }else{
        b=a%10000;
        b/=10;
        printf("%d",b);
    }
       

    return 0;
}