#include<stdio.h>
#include<stdlib.h> 
int main(){
	int a, b;
	int function;
	
	do{
		printf("\nTinh tong chon 1 ");
		printf("\nTinh hieu chon 2 ");
		printf("\nTinh tich chon 3 ");
		printf("\nTinh thuong chon 4 ");
		printf("\nThoat chon 5 ");
		printf("\n\tMoi nhap so thu nhat: ");
		scanf("%d",&a);
		printf("\n\tMoi nhap vao so thu hai: ");
		scanf("%d",&b);
		printf("\tMoi chon chuc nang ");
		scanf("%d",&function); 
		switch(function){
			case 1:
				printf("\tTong hai so la: %d",a+b);
				break;
			case 2:
				printf("\tHieu hai so la: %d",a-b);
				break;
			case 3:
				printf("\tTich 2 so la: %d",a*b); 
				break;
			case 4:
				printf("\tThuong cua hai so la: %d",a/b); 
				break;
			case 5:
				exit(0);
			default:
				printf("\tKhong co chua nang nay");
				 
				
		}
	}while(1);
	return 0; 
	}
