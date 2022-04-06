#include<stdio.h>
int main(){
	int a=1;
	printf("The required Numbers Output for 1-100 are:\n");
	while(a<101){
	printf(" %d",a);
	a++;
	}
	int b=100;
	printf("\nThe required Numbers Output for 100-1 are:\n");
	while(b>=1){
	printf(" %d",b);
	b--;
	}
	printf("\n");
	return 0;
}
