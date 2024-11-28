#include<stdio.h>
int main(){
	int number[5]={7,1,14,2,22};
	int a, b=0;
	printf("Moi ban nhap vao mot phan tu : ");
	scanf("%d", &a);
	for(int i=0;i<a;i++){
		if(number[i]==a){
			printf("Phan tu ban vua nhap co vi tri trong mang la : %d",i+1);
			b=1;
		}
	}
	if(b==0){
		printf("Phan tu khong ton tai trong mang");
	}
	return 0;
}
