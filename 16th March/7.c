#include<stdio.h>
// Qn.07 Take 5 and generate new number: Eg.- 19265 to 65219
int main(){
    int a,b,c,d;
    printf("Enter a five digit number: \n");
    scanf("%d",&a);
    b=a/1000;
    d=a%1000;
    c=a%100;
    d/=100;
    int s=(c*1000)+(d*100)+b;
    printf("\nThe new number of %d is %d",a,s);
    return 0;
}