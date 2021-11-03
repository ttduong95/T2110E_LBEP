#include<stdio.h>
int main(){
	int n;
	printf("Nhap mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap PT %d =",i);
		scanf("%d",&arr[i]);
	}
		int min=arr[0];
		for(int i=0;i<n;i++){
			if(min > arr[i] && arr[i]>0){
				min=arr[i];
			}
			
		}printf("Min duong la: %d ",min);
	
}
