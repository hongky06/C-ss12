#include<stdio.h>
int sapxep(int x ,int arr[]){
    int tem;
	for(int i = 0 ;i < x-1 ;i++){
    	for ( int j = 0 ; j < x-1-i;j++){
    		if(arr[j] > arr[j+1]){
    			tem = arr[j];
    			arr[j]=arr[j+1];
    			arr[j+1]= tem;
			}
		}
    }
		
            printf("phan tu lon nhat la : %d",arr[x-1]);
}



int main(){
	int x;
	printf("hay nhap so luong ham "); 
	scanf("%d",&x);
	int arr[x];
	for (int i = 0 ; i < x ; i++){
		printf("[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	
	sapxep( x , arr);
	return 0;
} 
