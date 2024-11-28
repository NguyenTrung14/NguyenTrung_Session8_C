#include<stdio.h>
int main(){
	int number[]={1,2,3,4,5,1,2,3,4,1,2,3,1,2,1};
	int max=0, count;
	int i, j ,a=number[0];
	for(i=0;i<sizeof(number)/sizeof(int);i++){
		count=1;
		for(j=i+1;j<sizeof(number)/sizeof(int);j++){
			if(number[i]==number[j]){
				count++;
			}
		}
		if(count>max){
			max=count;
			a=number[i];
		}
	}
	printf("Phan tu xuat hien nhieu nhat trong mang la : %d \nCo so lan xuat hien la : %d",a ,max);
	return 0;
}
