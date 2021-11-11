#include<stdio.h>
int main(){
	int n,x;
	printf("Nhap mang n: ");
	scanf("%d",&n);
	printf("Nhap so x= ");
	scanf("%d",&x);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap PT mang %d = ",i);
		scanf("%d",&arr[i]);
	}
	int a=0,b=0;
	int co=0; 
	for(int i=0;i<n;i++){
		if(x>arr[i]){
			a=arr[i];
			co=1;
			if(a>b){
				b=a;
				
			}		
		}
	}
	if(co==0){printf("ko co so nao be hon tiem can x");
	}else{
	printf(" so nho hon gan nhat voi x la: %d",b);
	}
	
}
