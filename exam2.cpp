#include<stdio.h>
int STTcuamin(int array[],int n){
	int min=array[0];
	int index=0;
	for(int i=0; i<n; i++){
		if(array[i]<min){
			min=array[i];
			index=i+1;
		}
	}
	return index;
}

int main(){
	int n;
	printf("Enter the numbers of element: ");
	scanf("%d",&n);
	
	int array[n];
	for (int i=0;i<n;i++){
		printf("a[%d] ",i+1);
		scanf("%d",&array[i]);
	}
	printf("index of the smallest element: %d",STTcuamin(array,n));
}
