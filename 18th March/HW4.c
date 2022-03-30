//Maximum & Minimum of the Six Number
#include<stdio.h>
int main(){
    int a,b,c,d,e,f,x,y,p,q;
    printf("Enter the six number\n");
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    x=(a>b)?((a>c)?a:c):((b>c)?b:c);
    y=(d>e)?((d>f)?d:f):((e>f)?e:f);
   
    int max=(x>y)?x:y;
    p=(a<b)?((a<c)?a:c):((b<c)?b:c);
    q=(d<e)?((d<f)?d:f):((e<f)?e:f);
    int min=(p<q)?p:q;
    printf("max=%d\nmin=%d",max,min);
    return 0;
}