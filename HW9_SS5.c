#include<stdio.h>
#include<stdlib.h>
int main(){
	int a, b, c;
	int choice;
	int temp;
	do{	
		printf("\n********MENU*********");
		printf("\n1. Nhap vao 3 so ");
		printf("\n2. Tinh tong ");
		printf("\n3. Tinh TBC ");
		printf("\n4. Tim min ");
		printf("\n5. Tim max ");
		printf("\n6. Thoat ");
		printf("\n\tLua chon cua ban: ");
		scanf("%d",&choice);
	switch (choice){
		case 1:
			temp = 1;
			printf("Nhap vao so thu nhat ");
			scanf("%d",&a);
			printf("Nhap vao so thu hai ");
			scanf("%d",&b);
			printf("Nhap vao so thu ba ");
			scanf("%d",&c);
			break;
		case 2:
			if(temp==1){
				printf("Tong ba so do la: %d ",a+b+c);
			}else{
				printf("Moi chon lai, chua co du lieu 3 so ");
			}			
			break;
		case 3:
			if(temp==1){
				printf("Trung binh cong cua ba so la %d ", (a+b+c)/3);
			}else{
				printf("Moi chon lai, chua co du lieu 3 so");
			}
			
			break;
		case 4:
			if(temp==1){
				printf("So nho nhat trong 3 so la: ");
					int min;
					if (a<b){
						min=a;
					}else{
						min=b;
					}
				if(min<c){
					printf("%d",min);
				}else{
					printf("%d",c);
				}
			}else{
				printf("Moi chon lai, chua co du lieu 3 so");
			}		
			break;
		case 5:
			if(temp==1){
				printf("So lon nhat trong 3 so la: ");
				int max;
					if (a>b){
						max=a;
					}else{
						max=b;
					}
				if(max>c){
					printf("%d",max);
				}else{
					printf("%d",c);
				}
			}else{
				printf("Moi chon lai, chua co du lieu 3 so");
			}
			
			break;
		case 6:
			exit(0);
			break;			
	}
	
	}while(1);
	return 0;
}
