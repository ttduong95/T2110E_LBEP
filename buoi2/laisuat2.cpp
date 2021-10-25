#include <stdio.h>
#include <math.h>
int main(){
	int n;
	float b;
	printf("gui so tien vao ngan hang la: ",b);
	scanf("%f",&b);
	printf("so nam gui ngan hang la: ",n);
	scanf("%d",&n);
	if(n!=0){
		
			b = b + b*8/100;
			n = n -1;

			
		if(n!=0){		
				b = b + b*8/100;
				n = n -1;
				
			if(n!=0){		
					b = b + b*8/100;
					n = n -1;

					
				if(n!=0){
						b = b + b*8/100;
						n = n -1;
	
			
				}else{	
								printf("tong tien nhan duoc la: %f",b);
				}
			}else{			printf("tong tien nhan duoc la: %f",b);
			}
		}else{			printf("tong tien nhan duoc la: %f",b);
		}
		
	}else{
					printf("tong tien nhan duoc la: %f",b);
	}
	
}
