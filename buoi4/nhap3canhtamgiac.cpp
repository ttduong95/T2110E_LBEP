#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	
		while(c>a+b || b>a+c || a>b+c){
			printf(" nhap canh a: ");
			scanf("%d",&a);
			printf(" nhap canh b: ");
			scanf("%d",&b);
			printf(" nhap canh c: ");
			scanf("%d",&c);
			if(c>a+b || b>a+c || a>b+c){
				printf("ban nhap chua dung xin nhap lai\n");
			}
		}
		int C = a+ b+c;
		float P = (float)C/2;
		double S = sqrt(P*(P-a)*(P-b)*(P-c));
		printf("chu vi tam giac la: %d\n",C);
		printf("dien tich tam giac la: %lf",S);
	
	
}
