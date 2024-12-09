#include<stdio.h>

int giaithua(int x, int tong ){
	for( int i = 1 ; i <= x;i++){
		tong= tong*i;
	}
	printf("gia thua = %d",tong);
	return tong;
}
  
int main(){
int x;
int tong=1; 
 printf("hay nhap so: ");
 scanf("%d",&x);
 giaithua( x,tong );
 return 0; 
}
