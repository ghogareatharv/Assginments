//WAP to check whether the given input is a pythagorean triplet or not


#include<stdio.h>
void main(){
	int a,b,c;

	printf("Enter three sides of triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>0 && b>0 && c>0){
	if((a*a)+(b*b)==(c*c)){
		printf("%d , %d and %d are pythagorean triplets\n",a,b,c);
	}else if((a*a)+(c*c)==(b*b)){
		printf("%d , %d and %d are pythagorean triplets\n",a,b,c);
	}else if((c*c)+(b*b)==(a*a)){
		printf("%d , %d and %d are pythagorean triplets\n",a,b,c);
	}else{
		printf("%d , %d and %d are not pythagoran triplets\n",a,b,c);
	}
	}else{
		printf("please enter valid inputs\n");
	}
}
