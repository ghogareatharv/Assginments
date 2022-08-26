//WAP to check the given num is prime or not

#include<stdio.h>
void main(){
	int a,m,i,add=0;
	
	printf("Enter the number\n");
	scanf("%d",&a);

	m=a/2;
	for(i=2;i<=m;i++){
		if(a%i==0){
			add=add+1;
		}
	}
	if(add!=0){
		printf("%d is prime number\n",a);
	}else{
		printf("%d is composite number\n",a);
	}

	
}
