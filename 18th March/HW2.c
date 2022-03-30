#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter three numbers: \n");
    scanf("%d%d%d",&a,&b,&c);
    d=(a>b)?(a>c?a:c):(b>c?b:c);
    e=(a<b)?(a<c?a:c):(b<c?b:c);
    printf("\nThe maximum number among %d, %d and %d is %d",a,b,c,d);
    printf("\nThe minimum number among %d, %d and %d is %d",a,b,c,e);
    return 0;
}