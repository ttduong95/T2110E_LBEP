#include<stdio.h>
int main(){
	
	int n;
	printf("nhap mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i= 0;i<n;i++){
		printf("nhap SLT %d = ",i);
		scanf("%d",&arr[i]);
}
	int T=0;
		for(int i=0;i<n;i++){
			if(arr[i]%2!=0){
				 T= arr[i];
			
		}
		
	}printf("so le cuoi cung la %d",T);

	
}
