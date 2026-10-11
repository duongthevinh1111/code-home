#include <stdio.h>
#include <math.h>
int main () {
//cau a
int a ,b ,c;
printf("Nhap vao 3 so nguyen a ,b ,c");
scanf("%d%d%d",&a,&b,&c);

//cau b 
if (a + b > c && a +c >b && b + c> a && a>0 && b>0 &&c>0){
	printf("\n3 canh tao thanh tam giac");
}else{
	printf("3 canh khong tao thanh tam giac");
	
}
 // cau c
 int chuvi;
 chuvi = a + b + c;
 printf("\nChu vi tam giac =%d",chuvi);
 
 //cau d
 float dientich,p;
 p= chuvi/2;
 dientich = sqrt(p * (p - a)*(p - b)*(p-c));
 printf("\n dien tich tam giac = %.2f",dientich);
}

