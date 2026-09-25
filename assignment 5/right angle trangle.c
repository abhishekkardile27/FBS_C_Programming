//Print a right-angled triangle pattern 
//Input: n = 5


#include<stdio.h>

void main (){
	int row,col,n=5;
	for(row=1;row<=n;row++){
		
		for(col=1;col<=row;col++){
				printf("*");
		}
		   printf("\n");
	}



//if(row==col){
//	printf("*");
//}
}