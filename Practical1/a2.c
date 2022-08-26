//WAP to find max number among 3 numbers



#include<stdio.h>
void main(){
	int x,y,z;
	printf("Enter the three numbers\n");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y && x>z){
		printf("%d is greatest number\n",x);
	}else if(y>x && y>z){
		printf("%d is greatest number\n",y);
	}else if(z>x && z>y){
		printf("%d is greatest number\n",z);
	}else{
		printf("%d %d %d are equal numbers\n",x,y,z);
	}
}

