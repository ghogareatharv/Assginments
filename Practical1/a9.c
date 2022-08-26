//WAP to print count of divisors of the entered num


#include<stdio.h>
void main(){
	int x,i,add=0;
	printf("Enter the number\n");
	scanf("%d",&x);
	if(x>0){
		for(i=1;i<=x;i++){
			if(x%i==0){
				add=add+1;
			}
		}
	}else{
		for(i=-x;i>=1;i--){
			if(x%i==0){
				add=add+1;
			}
		}
	}
	printf("%d is count of divisors\n",add);
}
