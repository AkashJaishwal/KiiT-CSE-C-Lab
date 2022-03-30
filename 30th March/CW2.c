//Take three digit number and display it in words [123 = One Two Three]

#include<stdio.h>
int main(){
	int a,b,c,d; 
	printf("Enter a Three digit number\t:");
	scanf("%d", &a);
	printf("The Numbers in the words are\t:");
	b = a/100;
	c = (a/10)%10;
	d = a%10;
	
	switch(b){
		case 1:
			printf("One");
			break;
		case 2: 
			printf("Two");
			break;
		case 3:
			printf("Three");
			break; 
		case 4:
			printf("Four");
			break;
		case 5:
			printf("Five");
			break;
		case 6: 
			printf("Six");
			break;
		case 7:
			printf("Seven");
			break;
		case 8:
			printf("Eight");
			break;
		case 9:
			printf("Nine");
			break;
		case 0:
			printf("Zero");
			break;
	}
	printf(" ");
	switch(c){
		case 1:
			printf("One");
			break;
		case 2: 
			printf("Two");
			break;
		case 3:
			printf("Three");
			break; 
		case 4:
			printf("Four");
			break;
		case 5:
			printf("Five");
			break;
		case 6: 
			printf("Six");
			break;
		case 7:
			printf("Seven");
			break;
		case 8:
			printf("Eight");
			break;
		case 9:
			printf("Nine");
			break;
		case 0:
			printf("Zero");
			break;
	}
	
	printf(" ");
	switch(d){
		case 1:
			printf("One");
			break;
		case 2: 
			printf("Two");
			break;
		case 3:
			printf("Three");
			break; 
		case 4:
			printf("Four");
			break;
		case 5:
			printf("Five");
			break;
		case 6: 
			printf("Six");
			break;
		case 7:
			printf("Seven");
			break;
		case 8:
			printf("Eight");
			break;
		case 9:
			printf("Nine");
			break;
		case 0:
			printf("Zero");
			break;
	}
	printf("\n");
	return 0;
}
