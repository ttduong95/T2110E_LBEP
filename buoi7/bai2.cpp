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
				if(arr[j]==arr[i]){
					flag = 1;
					printf("da ton tai %d trong ds\n",arr[i]);
					break;
				}
			}
		}while(flag==1);
		}printf("mang sau khi nhap la:\n");
		for(int i=0;i<n;i++){
			printf("%d\t",arr[i]);
		}
	}
	

