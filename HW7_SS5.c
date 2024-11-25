#include<stdio.h>
int main(){
	int a, b;
  
	printf("Nhap vao so thu nhat: ");
	scanf("%d",&a);
	printf("Nhap vao so thu hai: ");
	scanf("%d",&b);
	 
	if(a==b){
		printf("UCLN = %d",a);	 
	}else{
	while(a!=b){
			if(a>b){
				a = a-b;
				
			}else{
				b = b-a;
			}
			
		}printf("UCLN = %d",a);
		}
		return 0;
	}
	
		
