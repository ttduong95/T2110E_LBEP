#include<stdio.h>

	float average(int s[],int n){
	double a=0;
		for(int i=0;i<n;i++){
		a+=	s[i];
		}
		return a/n;
	}
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int arr[n];
	for(int i =0;i<n;i++){
		printf("Nhap PT %d= ",i);
		scanf("%d",&arr[i]);
	}
	printf("Trung binh cong cua mang la: %f",average(arr,n));
	
}
