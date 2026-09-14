#include<stdio.h>

int main(){
	int num=121;
	int orignal=num;
	int rev=0;
	while(num>0){
		int digit=num%10;
		rev=rev*10 + digit;
		num=num/10;
		
	}
	
	if(orignal==rev){
		printf("number is palindrom");
	}else{
		printf("number is not palindrom");
	}
	return 0;
}