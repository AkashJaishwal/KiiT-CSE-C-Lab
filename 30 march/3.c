#include<stdio.h>
//Qn.03 Take a real value and display it's integer and real part separately.
int main(){
    float a,b;
    int c,d;
    printf("Enter a real value:\n");
    scanf("%f",&a);
    c=(int)a;
    printf("\n%d",c);
    a-=c;
    d=a*100;
    printf("\n%d",(int)d);
    return 0;
}