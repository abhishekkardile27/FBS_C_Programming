//Print table for given number.

#include<stdio.h>

void main(){
	
	int i=1;
	int num;
	printf("Enter Number=");
	scanf("%d",&num);
	
	while(i<=10){
		
		
		printf("%d ",i * num);
		i++;
	}
}