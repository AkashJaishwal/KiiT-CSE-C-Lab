#include<stdio.h>
// Qn.06 Take 3-digit number and compare it's reverse number.
int main(){
    int a,b,c,s;
    printf("Enter a three digits number: \n");
    scanf("%d",&a);
    c=a%10;
    s=c*100;
    b=a/10;
    c=b%10;
    s+=(c*10);
    c=a/100;
    s+=c;
    printf("The reverse of %d is %d",a,s);
    return 0;
}