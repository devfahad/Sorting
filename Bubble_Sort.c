#include <stdio.h>

int main(){
	int arr[100],i,j,tmp,n;
	printf("Enter the number of elemnets : ");
	scanf("%d",&n);
	printf("Enter %d integers below : \n",n);
	
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n-1-i; j++){
			if(arr[j]>arr[j+1]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}	
		}
	}
	for(i=0; i<n; i++){
			printf("%d\t",arr[i]);
		}
	return 0;
}
