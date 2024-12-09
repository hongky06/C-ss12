#include<stdio.h>

void ham (int arr[], int arrsize){
	for( int i = 0 ; i < arrsize; i++){
		printf("%d",arr[i]);
	}
}


int main() {
int arr[5]={1,2,3,4,5};
int arrsize= sizeof(arr)/sizeof(int);
ham ( arr, arrsize);
return 0;
} 
