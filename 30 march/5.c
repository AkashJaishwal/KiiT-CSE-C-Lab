#include<stdio.h>
// Qn.05 Enter 4 digit number: 1926 and display it's each digits.
int main(){
    //First part
    int a,b,c,d,e;
    printf("Enter four digits number: \n");
    scanf("%d",&a);
    // int c=a;
    b=a%10;
    // printf("%d",b);
    c=a/10;
    c%=10;
    // printf("\n%d",c);
    d=a/100;
    d%=10;
    // printf("\n%d",d);
    e=a/1000;
    // printf("\n%d",e);
    printf("\n\nusing tab:\n");
    printf("%d\t%d\n%d\t%d\n%d\t%d\n%d\t%d",b,e,c,d,d,c,e,b);
    printf("\nUsing second method(%%8d)");
    printf("\n%d%8d\n%d%8d\n%d%8d\n%d%8d",b,e,c,d,d,c,e,b);
    return 0;
}