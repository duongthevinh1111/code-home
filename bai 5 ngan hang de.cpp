#include <stdio.h>
int main (){
	int n ;
	printf("Nhap vao so n = ");
	scanf("%d",&n);
	
	int i = 1;
	int tong = 0;
	int dem = 0;
	float TBC = 0;
	if(n>0 && n<=100){
	   for (i=1;i<=n;i++){
	   	printf("%d \n",i);
		if( i % 2 ==0 && i % 3 == 0){
			tong = tong + i;
			dem ++;
		 	                        }
		                 }
		printf("\ntong chan = %d",tong);
		if(dem >0){
			printf(" \nTBC = %.2f",(float)tong / dem);
		          }
	                                                    }
	
}


