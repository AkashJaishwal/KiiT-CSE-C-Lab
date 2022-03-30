//Take two Time in HH:MM and find the difference
//If not then show 2nd time should be small
#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g;
    printf("Enter two time in HH:MM format:\n");
    scanf("\n%d:%d",&a,&b);
    scanf("\n%d:%d",&c,&d);
    e=(b>d)?(b-d):(b+60-d);
    f=(b>d)?(a-c):(a-1-c);
    //Using the Conditional Operator
    g=(f<0||e<0)?printf("Not Possible to Perform the Task"):printf("The Difference in time is %d:%d",f,e);
    return 0;
}