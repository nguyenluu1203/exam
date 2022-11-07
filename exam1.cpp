#include<stdio.h>
int main(){
	printf("nhap 10 so nguyen \n");
	
	int array[10];
	for (int i=0;i<10;i++){
		printf("nhap so nguyen thu %d: ",i+1);
		scanf("%d",&array[i]);
	}
	for( int i=9;i>=0; i--){
		printf("%d \n",i+1);
	}
}
