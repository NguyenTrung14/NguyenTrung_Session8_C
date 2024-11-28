#include<stdio.h>
int main(){
	int a;
	printf("Moi ban nhap vao mot so nguyen : ");
	scanf("%d", &a);
    int i, j, b=0, c=0;
	int number[a][a];
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			scanf("%d", &number[i][j]);
		}
	}
	for(j=0;j<a;j++){
		printf("%d  ",number[j][j]);
		b += number[j][j];
	}
	int total = b ;
	printf("\nTong cac phan tu tren duong cheo cua mang = %d ",total);
	return 0;
}
	
	
	
