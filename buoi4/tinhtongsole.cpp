#include<stdio.h>
int main(){
	int i,T,n;
	printf(" nhap vi tri can tinh ");
	scanf("%d",&n);
	T=0;i=1;
	n = n*2;
	while(i<n){
		if(i%2!=0){
			T=T+i;
		}i++;
		
	} printf(" tong %d so le dau tien la %d",n,T);
	
	
	
}
