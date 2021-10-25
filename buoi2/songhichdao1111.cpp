#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	printf("nhap so nguyen: ");
	scanf("%d",&a);
	
	if(a<100){
		 b = 0;
		 b= b*10 +a%10;
		 a= a/10;
		 b= b*10 + a%10;
		 a= a/10;
		 printf("so nghich dao %d",b);
	}else if(a<1000){
		 b = 0;
		 b= b*10 +a%10;
		 a= a/10;
		 b= b*10 + a%10;
		 a= a/10;
		 b= b*10 + a%10;
		 a= a/10;
		 	 printf("so nghich dao %d",b);
		
	}else if( a<10000){
		 b= b*10 + a%10;
		 a= a/10;
		 b= b*10 + a%10;
		 a= a/10;
		 b= b*10 + a%10;
		 a= a/10;
		 b= b*10 + a%10;
		 a= a/10;
		 	 printf("so nghich dao %d",b);
	}
}
