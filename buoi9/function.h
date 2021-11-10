#include<stdio.h>
#include<math.h>
int sum(int a,int b){
	return a+b;	// sau return luon la 1 gia tri co the la bien, bieu thuc
}
// cos the tra ve gia tri luan ly (boolean)-- la ket qua toan tu logic va relation(so sanh va ket hop) - true\false

bool kiemtrasoduong(int a){
	// if(a>o){
	// return true;
//	}
//return false;
//a>0 -> ket qua se la true hoac false
return a>0;
	
}
void inramenu(){

	printf(" vui long chon menu:\n");
	printf("1.chon mon an\n");
	printf("2. cho do uong\n");
	// return ; co hoac ko co cung dc
}
// kiem tra so nguyen to
bool kiemtrasonguyento(int n){
	
	if(n<2) return false;
	if(n<4) return true;
	
	for( int i=2; i<=n/2;i++){
		if(n%i==0) return false;
	}
	return true;
}

// kiem tra so nguyen to
bool check(int a){
	if(a<2){
		return false; // neu be hon 2 se cho tra ket qua la sai: return false;
	}else{
	
		for(int i=2;i<=a/2;i++){	
			if(a%i==0){	
				return false;	// neu chia het cho i thi cung sai: return false;
				}	
		}
		
	} 
	return true; // sau tat ca neu ma o tren dung het thi se tra ve ket qua cuoi cung la dung return true;
	
}
// tim so dao nguoc
int daonguoc(int a){
	int b=0;
	while(a!=0){
		b =b*10+a%10;
		a=a/10;
	}
	return b;
}
//tim so lon nhat trong mang
int findmax(int arr[],int n){
	int h = arr[0];
	for(int i = 0;i<n;i++){
		if(h<arr[i]){
			h=arr[i];
		}
	}
	return h;
}
//tim so gan lon nhat trong mang n
int soganlonnhat(int arr[],int n){
	int h=arr[0];
	for(int i=0;i<n;i++){
		if(h<arr[i]){
			h=arr[i];
		}
	}
	int m =h;
	for(int i=0;i<n;i++){
		if(arr[i]<h){
			m=arr[i];break;
		}
	}
		if(m==h){
			printf("Hai so bang nhau");
		}return NULL; // tra ve gia tri trong
		for(int i=0;i<n;i++){
			if(m<arr[i] && arr[i]<h){
				m=arr[i];
			}
		
	}return m;
}
// tim so nguyen to tiep theo n
int songuyentotiep(int n){
	int i=n+1;
	while(kiemtrasonguyento(i)== false){
		i++;

		}return i;
	}
// tinh tong chu so n
int tongchuso(int n){
int a=0;
	while(n!=0){
		a =a+n%10;
		n=n/10;
	}
	return a;
}
// tinh chu vi tam giac
int chuvitamgiac(int a,int b, int c){

	return a+b+c;
	
}
// tinh dien tich tam giac
float dientichtamgiac(float a,float b, float c){
	float S;
if(a+b>c && a+c>b && b+c>a){


		float P = (a+b+c)/2;
		 S = sqrt(P*(P-a)*(P-b)*(P-c));
	
}return (float)S;
	
}
//bt5 tim uoc chung lon nhat
int uocmax( int a, int b){
if( a==0 || b==0)return a+b;

	while(a!=b){
		if(a>b){
			a-=b;
		}else{
			b-=a;
		}
	}return a;

}
//bt6 tim boi chung nho nhat
int boichungmin(int a, int b){
	if(a==0 || b==0) return false;
	if(a==b) return a;
	if(a!=b){
		if(a>b && a%b==0) return a;
		if(a<b && b%a ==0) return b;
		
	}return a*b;
}


	


































