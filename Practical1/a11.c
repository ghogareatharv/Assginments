//WAP take two charcters if these are equals then print them as it is but if
// they are unqual then print their diiffernce



#include<stdio.h>
void main(){
	char ch1,ch2;
	int count=0;

	printf("Enter the characters\n");
	scanf("%c %c",&ch1,&ch2);
	
	if(ch1==ch2){
		
		printf("%c and %c are equal\n",ch1,ch2);

	}else if(ch1>=65 && ch1<=90 && ch2>=65 && ch2<=90){
		
		if(ch1<ch2){
			
			for(int i=ch1;i<=ch2;i++){
				count=count+1;
			}
		
		}else if(ch2<ch1){

			for(int i=ch2;i<=ch1;i++){
				count=count+1;
			}
		
		}

		printf("Differnce between %c and %c is %d\n",ch1,ch2,count);

	
	}else if(ch1>=97 && ch1<=122 && ch2>=97 && ch2<=122){
		
		if(ch1<ch2){
			
			for(int i=ch1;i<=ch2;i++){
				count=count+1;
			}
		
		}else if(ch2<ch1){

			for(int i=ch2;i<=ch1;i++){
				count=count+1;
			}
		}
		
		printf("Differnce between %c and %c is %d\n",ch1,ch2,count);
		
	}else{

		printf("You have enterd wrong chracters\n");
	
	}

}
	
