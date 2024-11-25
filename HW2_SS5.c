#include<stdio.h>
int main(){
	int n = 10, num; 
	printf("Moi ban nhap vao so nguyen: ");
	
	while(n!=num){
	
		scanf("%d",&num);
		if(num == n){
		printf("Chinh xac roi ");
		break; 
		}else{
		printf("So nhap chua chinh xac roi, moi nhap lai  ");
	}
	}
	return 0;
}
