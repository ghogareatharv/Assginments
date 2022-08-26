//WAP that takes 0 to 5 number and print thier spelling


#include<stdio.h>
void main(){
	int x;
	printf("Enter the number between 1 to 5\n");
	scanf("%d",&x);

	switch(x){
		case 1:
			printf("%d = one\n",x);
			break;
		case 2:
			printf("%d = two\n",x);
			break;
		case 3:
			printf("%d = three\n",x);
			break;
		case 4:
			printf("%d = four\n",x);
			break;
		case 5:
			printf("%d = five\n",x);
			break;
		case 0:
			printf("%d = zero\n",x);
			break;
		default:
			printf("%d is less than 0 or greater than 5\n",x);
		}
}

