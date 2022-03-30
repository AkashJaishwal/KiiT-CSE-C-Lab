//Find out whether the given number is a good number or not
//For Both 4 digits Number and 5 digits Number
#include<stdio.h>
int main(){
    int a,b,c,d,e;
    int v,w,x,y,z;
    printf("Enter four digits number: \n");
    scanf("%d",&a);
    printf("\nEnter five digits number: \n");
    scanf("%d",&w);
    b=a%1000;
    b/=10;
    c=a/1000;
    d=a%10;
    b=b*b;
    e=(c*10)+d;
    x=w%10000;
    z=x%100;
    x/=100;
    x*=x;
    y=w/10000;
    v=(y*100)+z;
    ((b==e)?printf("\n%d is a good number",a):printf("\n%d is not a good number",a));
    ((x==v)?printf("\n%d is a good number",w):printf("\n%d is not a good number",w));
    return 0;
}