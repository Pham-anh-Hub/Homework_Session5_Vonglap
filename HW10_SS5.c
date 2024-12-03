#include<stdio.h>
int main(){
	int number;
	printf("Nhap vao 1 so nguyen ");
	scanf("%d",&number);
	
	while(number>0){
		
		int charactor;
		charactor = number%10;
		printf("\t%d",charactor);
		
		number = number/10;
	}
	return 0;
	
	
}

