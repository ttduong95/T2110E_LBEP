#include<stdio.h>
int main(){
	int n,S;
	printf("Nhap so: ");
	scanf("%d",&n);
	S=0;
	for(int i=1;i<n;i++){
	int T;
		T=i%2;
		if(T==0){
			S=S+i;
		}

	
	
	}printf("tong uoc cua %d la %d",n,S);
}
