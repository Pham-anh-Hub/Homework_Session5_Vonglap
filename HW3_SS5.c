#include<stdio.h>

int main(){
	int n;
	int tong=0;
	printf("Nhap vao so nguyen n: ");
	scanf("%d",&n);
	int i = 1;
	for (;i<=n; i++){
	 	tong+=i;
	}
	printf("Tong cac so tu 1 den n la: %d",tong);
	
	return 0;
}
