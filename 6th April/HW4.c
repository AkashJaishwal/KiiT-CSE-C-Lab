#include<stdio.h>
int main(){
	int a;
	int b;
	printf("Enter the 1st Number: ");
	scanf("%d",&a);
	printf("Enter the 2nd Number: ");
	scanf("%d",&b);
	printf("The Number Divisible by 5 are:\n");
	int c=a;
	while (c<=b){
		if(c%5==0)
		printf("%d\n",c);
		c++;
	}
	printf("The Number Divisible by 8 are:\n");
	while (a<=b){
		if(a%8==0)
		printf("%d\n",a);
		a++;
	}
	return 0;
}
