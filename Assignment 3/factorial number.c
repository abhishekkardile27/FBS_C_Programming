// Find factorial of given number. 
//Input: n = 5 
//Output: 120

#include<stdio.h>

void main(){
	
	int i;
	int n=5;

	int fact=1;
	
	for(i=1;i<=n;i++){
		
		fact= fact * i;
		
	}
	
	printf("factorial=%d",fact);
}