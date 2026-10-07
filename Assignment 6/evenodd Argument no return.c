#include<stdio.h>

void evenodd(int x);

void main (){
	
	int n;
	
	printf("Enter Number=");
	scanf("%d",&n);
	evenodd(n);
}

void evenodd(int n){
	
	if(n%2==0){
		printf("Number is even");
	}else
	{
		printf("Number is odd");
	}
}