
//Print a half pyramid using numbers
//Input: n = 5
//Output:
//1
//12
//123
//1234
//12345


#include<stdio.h>

void main (){
	int row,col,n=5;
	for(row=1;row<=n;row++){
		
		for(col=1;col<=row;col++){
				printf("%d ",col );
		}
		   printf("\n");
	}
}