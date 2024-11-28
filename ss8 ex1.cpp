#include<stdio.h>
int main(){
	int number[5]={14,2,7,1,22};
	for(int i=(sizeof(number)/sizeof(int)-1);i>=0;i--){
		printf("%d\n",number[i]);
	}
	return 0;
}
