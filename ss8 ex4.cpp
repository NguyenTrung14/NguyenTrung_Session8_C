#include<stdio.h>
int main(){
	int a;
	printf("Moi ban nhap vao mot so nguyen : ");
	scanf("%d", &a);
    int i, j, b=0;
	int number[a][a];
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			scanf("%d", &number[i][j]);
		}
	}
	printf("\n \n");
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			if(b<number[i][j]){
				b=number[i][j];
			}
		}
	}
	printf("%d",b);
	return 0;
}
