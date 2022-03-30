//Write a program to find the maximum and minimum among 4 Number
#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    printf("Enter four numbers: \n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=((a>b)?((a>c)?((a>d)?a:d):(c>d?c:d)):((b>c?(b>d?b:d):((c>d)?c:d))));
    f=((a<b)?((a<c)?((a<d)?a:d):(c<d?c:d)):((b<c?(b<d?b:d):((c<d)?c:d))));
    printf("The maximum Number among %d, %d, %d and %d is %d",a,b,c,d,e);
    printf("\nThe minimum Number among %d, %d, %d and %d is %d",a,b,c,d,f);
    return 0;
}