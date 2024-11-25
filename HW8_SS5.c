#include<stdio.h>
int main(){
	int a1, b1,a,b;
 
	printf("Nhap vao so thu nhat: ");
	scanf("%d",&a);
	printf("Nhap vao so thu hai: ");
	scanf("%d",&b);
	a1=a; b1=b; 
	if(a==b){
		printf("BCNN = %d",(a*b)/a);	 
	}else{ 
		while(a!=b){
			if(a>b){
				a = a-b; 
			}else{
				b = b-a;
			}
		}
		printf("BCNN la: %d",(a1*b1)/a);
	}
	return 0;
}
