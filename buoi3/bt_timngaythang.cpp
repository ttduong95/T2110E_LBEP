#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf(" nhap vao so ngay trong thang: ");
	scanf("%d",&a);
	printf(" nhap so thang trong nam: ");
	scanf("%d",&b);

		if(a<=31&& a>0&& b>0&& b<=12){
			if(b==1){
				c=a;
			}else if(b==2&&a<=28){
				c= a +31;
			}else if(b==3){
				c = a +31+28;		
			}else if(b==4&&a<31){
				c= a+ 31+28+31;
			}else if(b==5){
				c = a+31+28+31+30;
			}else if(b ==6&&a<31){
				c = a+31+28+31+30+31;
			}else if(b ==7){
				c = a+31+28+31+30+31+30;
			}else if( b==8){
				c = a+31+28+31+30+31+30+31;
			}else if( b == 9&& a<31){
				c = a+31+28+31+30+31+30+31+31;
			}else if(b==10){
				c = a+31+28+31+30+31+30+31+31+30;
			}else if(b==11&&a<31){
				c = a+31+28+31+30+31+30+31+31+30+31;
			}else if( b ==12){
				c = a+31+28+31+30+31+30+31+31+30+31+30;
			}else{
		printf("Nhap sai ngay thang");
		}
	
	}else{
		printf(" nhap sai ngay thang");
	}
	
	switch(c%7){
			case 1: printf("ngay %d thang %d ngay thu %d trong nam la ngay thu hai",a,b,c);break;
			case 2: printf("ngay %d thang %d ngay thu %d trong nam la ngay thu ba",a,b,c);break;
			case 3: printf("ngay %d thang %d ngay thu %d trong nam la ngay thu tu",a,b,c);break;
			case 4: printf("ngay %d thang %d ngay thu %d trong nam la ngay thu nam",a,b,c);break;
			case 5: printf("ngay %d thang %d ngay thu %d trong nam la ngay thu sau",a,b,c);break;
			case 6: printf("ngay %d thang %d ngay thu %d trong nam la ngay thu bay",a,b,c);break;
			case 7: printf("ngay %d thang %d ngay thu %d trong nam la ngay chu nhat",a,b,c);break;
			default: printf(" loi ");															
		}
			
	
}
