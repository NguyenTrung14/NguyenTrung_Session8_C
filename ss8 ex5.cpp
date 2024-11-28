#include<stdio.h>
int main(){
	int a;
	printf("Moi ban nhap vao mot so nguyen : ");
	scanf("%d", &a);
    int i, j;
	int number[a][a];
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			scanf("%d", &number[i][j]);
		}
	}
	int total=0, total1=0, total2=0, total3=0;
	for(j=0;j<a;j++){
		total+=number[0][j];
	}
	for(i=0;i<a;i++){
		total1+=number[i][0];
	}
	if(a>0){
		for(j=0;j<a;j++){
			total2+=number[a-1][j];
		}
		for(i=0;i<a;i++){
			total3+=number[i][a-1];
		}
	}
	printf("Tong cac phan tu nam o duong bien cua mang la :\n%d \n%d \n%d \n%d",total ,total1 ,total2, total3);
	return 0;
}
