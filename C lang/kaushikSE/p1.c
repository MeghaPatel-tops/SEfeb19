#include<stdio.h>

main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1 || j==1 || j==5 || i==5){
				printf(" o");
			}
			else{
				printf(" 1");
			}
			
		}
		printf("\n");
	}
}
