//WAP to check whether the input year is leap or not

#include<stdio.h>
void main(){
	int x;
	printf("Enter the year\n");
	scanf("%d",&x);
	if(x%4==0){
		printf("The year is leap year\n");
	}else{
		printf("The year is not leap year\n");
	}
}
