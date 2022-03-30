#include<stdio.h>
//Write a program to find minimum among 2 number
int main(){
    int a,b,c;
    printf("Enter any two numbers: \n");
    scanf("%d%d",&a,&b); //Asking for the input with the user
    c=(a<b)?a:b;
    printf("The minimum number among %d and %d is %d",a,b,c);
    return 0;
}