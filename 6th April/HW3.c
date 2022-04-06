#include<stdio.h>
int main(){
	int a;
	int b=1;
	int c=1;
	printf("Enter the Number for the Multiplication Table: ");
	scanf("%d",&a);
	while(b<=10){
		c=a*b;
		printf("%d X %d = %d\n", a, b, c);
		b+=1;	
	}
	return 0;
}
