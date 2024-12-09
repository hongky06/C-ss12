#include<stdio.h>



float tong(int num1,  int num2);


int main(){
int a,b;
float sum;
    printf("hay nhap so thu nhat: ");
    scanf("%d",&a);
    printf("hay nhap so thu hai: ");
    scanf("%d",&b);
    sum = tong(a,b);
	printf("tong hai so la: %.2f ",sum);
    	
    
    return 0;
}

float tong(int num1,  int num2){
	int sum = num1 + num2;
	return sum;
}


