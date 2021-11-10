#include<stdio.h>
#include"function.h"
#include<math.h>
int main(){
	int a,b,c;
		while(a+b<c || a+c<b || b+c<a){	
	printf("Nhap canh thu 1= ");
	scanf("%d",&a);
	printf("Nhap canh thu 2= ");
	scanf("%d",&b);
	printf("Nhap canh thu 3= ");
	scanf("%d",&c);
		if(a+b<c || a+c<b || b+c<a ){
		printf("Nhap sai 3 canh tam giac xin nhap lai:\n");
		}
	}
	printf("Chu vi tam giac la: %d\n",chuvitamgiac(a,b,c));
	printf("Dien tich tam giac la: %fl\n",dientichtamgiac(a,b,c));
}
