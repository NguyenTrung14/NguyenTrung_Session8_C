#include <stdio.h>
int main() {
  	int arr[]={1,2,1,1,4,4,5,2,7,2,4};
  	int maxCount; 
  	int item; 
  	int result[100];
  	int index=0;
  	for(int i=0;i<11;i++){
  		int count=0;
  		for(int j=0; j<11;j++){
  			if(arr[i]==arr[j]){
  				count++;	
  			}
  		}
  		if(count>maxCount){
  			maxCount=count;
  		}
  	}
  	for(int i=0; i<11; i++){
  		int count=0;
  		for(int j=0; j<11; j++){
  			if(arr[i]==arr[j]){
  				count++;
  			}
  		}
  		if(count==maxCount){
  			int flag=-1;
  			for(int k=0;k<index; k++){
  				if(arr[i]==result[k]){
  				   flag=1;
  				   break;
  				}
  			}
  			if(flag==-1){
  				result[index]=arr[i];
  				index++;
  			}
  		}
  	}
	  	printf("gia tri index %d",index);
	  	for(int i=0; i< index;i++){
	  		printf("\n %d",result[i]);
	  	}
  return 0;
}
