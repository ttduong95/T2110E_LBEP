#include<stdio.h>
int main(){
	int n;
	printf("Nhap so: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap PT mang %d= ",i);
		scanf("%d",&arr[i]);
	}
	int a=0,flag=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			a=arr[i];
			flag=1;
		}
	}
	if(flag==0){
		printf("Mang khong co so chan\n");
	}else{
		printf("So chan cuoi cung cua mang la: %d",a);
	}
		
}

