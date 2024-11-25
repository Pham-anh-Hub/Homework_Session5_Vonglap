#include<stdio.h>
int main(){
	int n=1;
	int i;
	for(;n<=10;){ 
		printf("\nBang cuu chuong %d: ",n);
		for(i=1; i<=10;i++){
			printf("\n%d x %d = %d",n, i, n*i);
			
		}n++;
	}
	return 0;
}
	

	 


