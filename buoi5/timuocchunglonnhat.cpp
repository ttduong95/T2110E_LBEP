#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("Nhap so b: ");
	scanf("%d",&b);
     if (a == 0 || b == 0){
        printf(" uoc chung lon nhat la %d ",a+b);
    }
    while (a != b){
        if (a > b){
            a -= b; // a = a - b  /// a tinh dc bao nhieu so voi a==b ko dung quay lai ban dau so sanh a vs b bao gio a =b thi dung
        }else{
            b -= a;
        }
    }printf("uoc chung lon nhat la %d",a);
}
