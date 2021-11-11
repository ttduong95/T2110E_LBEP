#include<stdio.h>
int main(){
	int n,x;
	printf("Nhap mang n: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		int flag=0;
		do{
		flag =0;
		printf("Nhap PT mang %d = ",i);
		scanf("%d",&arr[i]);

			for(int j=0;j<i;j++){
				if(arr[i]==arr[j]){
					flag = 1;
					printf("da ton tai %d trong ds\n",arr[i]);
					break;
				}
			}
			if(flag==0){
				if(arr[i]<2){
					flag=1;
				}else{
					int count=0;
					for(int j=0;j<arr[i]/2;j++){
						if(arr[i]%j==0){
							flag=1;break;
						}
					}
				}
			}if(flag==1){
				printf("vua nhap ko phai so nguyen to\n");
			}
		}while(flag==1);
	}printf(" mang sau khi nhap xong:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}
