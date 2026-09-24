//Check the given number is Strong number or not. 
//Input: n = 145 
//Output: Strong 

#include<stdio.h>

void main(){
	int n=145;
	int orignal=n;
	int digit;
	int sum=0;
	int fact;
	int i;
	
	while(n>0){
	digit=n%10;
	fact =1;
	
	for(i=1;i<=digit;i++)
        {
	fact=fact * i;
	
         }
  sum=sum + fact;
  n=n/10;
  	}
  	
  	if (sum ==orignal)
    {
        printf("Strong");
    }
    else
    {
        printf("Not Strong");
    }
  
}