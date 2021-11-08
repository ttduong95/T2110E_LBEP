#include<stdio.h>
int main(){
	int n,temp;
	printf("Nhap mang n: ");
	scanf("%d",&n);
	int arr[n];
	for(int i =0;i<n;i++){
		printf("\nNhap so PT %d = ",i);
		scanf("\n%d",&arr[i]);
	
	for(int a = 0; a<=i;a++){
		for(int j=0;j<i;j++){
			if(arr[j]>arr[j+1]){
			int	temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}printf("%d\t",arr[a]);
	
	
		}
	
	}
	
	
}
