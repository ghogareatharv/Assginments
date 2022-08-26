//WAP that takes the angles of triangle from user and print whether that triangle is valid or not


#include<stdio.h>
void main(){
	int a,b,c;
	
	printf("Enter three angles\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>0 && b>0 && c>0){	
		if(a+b+c==180){
			printf("%d , %d and %d are triangle angles\n",a,b,c);
		}else{
			printf("%d , %d and %d are not triangle angles \n",a,b,c);
		}
	}else{
		printf("please enter valid angles\n");
	}
}
