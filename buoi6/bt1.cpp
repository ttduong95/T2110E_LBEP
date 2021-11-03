#include<stdio.h>
int main(){
	int n;
	printf("nhap so mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){	
	printf("nhap: %d ",i);
	scanf("%d",&arr[i]);	
	} float t=0;
		for(int i =0;i<n;i++){
			
			if(arr[i]%2!=0){
			 t= t +(float)arr[i]/2;
				
			}
		}printf("Tb cong la: %f",t);
	
	
}
