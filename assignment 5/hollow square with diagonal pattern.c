//Print a hollow square with diagonal pattern
//Input: n = 5
//Output:
//
//* * * * *
//* *     *
//*   *   *
//*     * *
//* * * * *


#include<stdio.h>

void main (){
	int row,col,n=4;
	for(row=1;row<=n;row++){
		
		for(col=1;col<=n;col++){
			
			if(row==1 || row==4 || col==1 || col==4 ||row==col){
			printf("* " );
			}else {
				printf("  ");
			}
				
			
		}
		   printf("\n");
	}
}