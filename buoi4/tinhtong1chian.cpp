#include<stdio.h>
int main(){
	int n;
	double T;
	printf("nhap so: ");
	scanf("%d",&n);
	int i =1;
	T=0;
	
	while(i<=n){
		 T= T + 1/(double)i;
		i++;
	}printf("tong la: %lf",T);
}
