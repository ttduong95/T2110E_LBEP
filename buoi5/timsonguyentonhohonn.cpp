#include<stdio.h>
int main(){
	
	int b,a;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);

	while(a>b){
	printf("Nhap sai vui long nhap lai\n");
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);}

	for(int i=a;i<=b;i++){
		int c=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				c++;
			}
		}if(c==2){
			printf("so nguyen to trong khoang %d den %d la: %d\n",a,b,i);
		}
	}

}
