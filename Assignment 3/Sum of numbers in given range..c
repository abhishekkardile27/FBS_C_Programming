//Sum of numbers in given range.

#include<stdio.h>

void main(){
	int i=1;
	int sum=0;
	int n=5;
	
	while(i<=n){
		
		sum=i + sum;
		i++;
		
	}
	printf("sum =%d",sum);
}