#include<stdio.h>
int main(){
	int n;
	printf("Nhap mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
	printf("nhap phan tu %d =",i);
	scanf("%d",&arr[i]);
}
	int x;
	printf("nhap so X= ");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
	
	if(x==arr[i]){
		printf("x nam trong mang");break;
		}
		
	}
	
}
