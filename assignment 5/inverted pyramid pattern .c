//Print an inverted pyramid pattern 
//Input: n = 5 
//Output: 
//***** 
//****  
//***  
//**  
//*       

#include<stdio.h>

void main (){
	
	int row,col,n=5;
	for(row=1;row<=n;row++){
		
		for(col=row;col<=n;col++){
				printf("*");
		}
		   printf("\n");
	}
}