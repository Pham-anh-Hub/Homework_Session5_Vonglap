#include<stdio.h>
int main(){
	int n;
	printf("Moi ban nhap so nguyen 1-10: ");
	scanf("%d",&n);
	int i;
	if(n>=1 && n<=10 && n>0 ){
		printf("Bang cuu chuong cua %d la:",n);
		for(i=1; i<=10; i++){
			printf("\n%d x %d = %d ", n, i, n*i); 
		}
	}else{
		printf("So khong hop le ");
	
	}
	return 0; 
	} 
	
	 


