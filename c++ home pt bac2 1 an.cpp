#include<stdio.h>
#include<math.h>

	
int main (){
	float a,b,c,x,x1,x2,delta;
	printf("Nhap vao 3 so a,b,c");
	scanf("%f%f%f",&a,&b,&c);
	
	if (a==0){
		printf("\n He so a phai khac 0");
	}else{
		delta = pow(b,2)-4*a*c ;
	if(delta>0){
		x1= (-b+sqrt(delta))/(2*a);
		x2= (-b-sqrt(delta))/(2*a);
		printf("phuong trinh co 2 nghiem phan biet x1=%.2f, x2=%.2f ",x1,x2);
		}else if(delta==0){
			x=-b/2*a;
			printf("phuong trinh co nghiem kep la x=%.2f",x);
			
		}else {
			printf("phuong trinh vo nghiem ");
		}
	
}
	 
			
		
		
		
		
	
	
	
	
	}
	
	
	
	
