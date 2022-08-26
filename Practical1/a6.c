//WAP to get 10 numbers from user and find thier sum and average


#include<stdio.h>
void main(){
	int x,add=0;
	float avg;
	printf("Enter the 10 numbers\n");
	for(int i=1;i<=10;i++){
		scanf("%d",&x);
		add=add+x;
	}
	avg=add/10;
	printf("Sum of all numbers is %d\nAverage is %f\n",add,avg);
}
