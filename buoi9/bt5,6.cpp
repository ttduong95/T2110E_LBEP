#include<stdio.h>
#include"function.h"
int main(){
	int a,b;
	printf("Nhap so a= ");
	scanf("%d",&a);
	printf("Nhap so b= ");
	scanf("%d",&b);
	printf("Uoc chung lon nhat %d va %d la: %d\n",a,b,uocmax(a,b));
	printf("Boi chung be nhat %d va %d la: %d",a,b,boichungmin(a,b));
}
