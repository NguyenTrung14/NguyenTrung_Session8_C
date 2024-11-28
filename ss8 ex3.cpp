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
	printf("\n \n");
	for(i=0;i<a;i++){
		for(int j=0;j<a;j++){
			printf("%d ",number[i][j]);
			if(j==a-1){
				printf("\n");
			}
		}
	}
	return 0;
}
