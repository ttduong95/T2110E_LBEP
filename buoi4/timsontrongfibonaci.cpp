#include<stdio.h>
int main(){
	
	int n;
	printf("nhap so tu nhien: ");
	scanf("%d",&n);
	int a,b,i,c;
	a=1;b=1;c;i=3;
		if(n==1){
			printf("vi tri so %d nam trong day so fibonacci la 1 ",n);
		}else if(n==2){
			printf("vi tri so %d nam trong day so fibonacci la 1",n);
		}else{
		
		while(i<=n){
		
		c= a+b; // c = 1+0;c = 1+1; c = 2+1;; c = 3+2 
		a=b;
		b=c;
		i++;
		
}
		
			printf("vi tri so %d nam trong day so fibonacci la %d",n,c);

}
	
	
}
