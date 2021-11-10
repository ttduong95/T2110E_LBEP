#include<stdio.h>
#include"function.h"
int main(){
	int a;
	printf("Nhap so a = ");
	scanf("%d",&a);
	if(kiemtrasonguyento(a)){
		printf("%d la so nguyen to\n",a);
	}else{
		printf("%d ko phai la so nguyen to\n",a);
	}

int mang[5] = {3,6,98,6,3};
printf("so lon nhat trong mang la %d ",findmax(mang,5));

int arr[6]={2,2,2,2,2,2};
printf("\nso gan lon nhat la %d ",soganlonnhat(arr,6));
int max2 = soganlonnhat(arr,6);
if(max2!=NULL)
	printf(" Tat ca cac so bang nhau va bang %d",max2);

}

