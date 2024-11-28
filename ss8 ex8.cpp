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
	i=0;
	j=a-1;
	while(i<a && j>=0){
		printf("%d  ",number[i][j]);
		i++;
		j--;
		c += number[i][j];
	}
	int total = c ;
	printf("\nTong cac phan tu tren duong cheo cua mang = %d ",total);
	return 0;
}
	
	
	
