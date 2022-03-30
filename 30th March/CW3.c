//display 1 to 99 digits in words 

#include<stdio.h>
int main(){
	int a,b,c; 
	printf("Enter a number in betwn 1 to 99: ");
	scanf("%d",&a);
	printf("The Number in the Word is\t:");
	
	if(a>99){
		printf("Wrong Input");
	}
	
	else if(a>=10&&a<20){
		switch(a){
			case 10:
				printf("Ten ");
				break;
			case 11:
				printf("Eleven");
				break;
			case 12:
				printf("Twelve");
				break;
			case 13:
				printf("Thirteen");
				break;
			case 14:
				printf("Fourteen");
				break;
			case 15:
				printf("Fifteen");
				break;
			case 16:
				printf("Sixteen");
				break;
			case 17:
				printf("Seventeen");
				break;
			case 18:
				printf("Eighteen");
				break;
			case 19:
				printf("Nineteen");
				break;
		}
	}
	
	else{
		b = a/10;
		c = a%10;
	
	switch(b){
		case 2:
			printf("Twenty ");
			break;
		case 3: 
			printf("Thirty ");
			break;
		case 4:
			printf("Forty ");
			break;
		case 5:
			printf("Fifty ");
			break;
		case 6:
			printf("Sixty ");
			break;
		case 7:
			printf("Seventy ");
			break;
		case 8:
			printf("Eighty ");
			break;
		case 9:
			printf("Ninety ");
			break;
		}
		
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
	}
		}
	printf("\n");
	return 0;
	}
