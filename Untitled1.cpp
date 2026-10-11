#include <stdio.h>
#include<math.h>
int main (){
        //khai bao
        float xa,ya,xb,yb,xc,yc;
        float AB,AC,BC;
        float chuvi,dientich,p;
        
        //nhap lieu
        printf("Nhap vao toa do A=");
              scanf("%f%f",&xa,&ya);
        printf("Nhap vao toa do B=");
              scanf("%f%f",&xb,&yb);
		printf("Nhap vao toa do C=");
              scanf("%f%f",&xc,&yc);	  
			        
        //tinh toanva xuat ket qua
        
	AB = sqrt(pow(xb - xa,2) + pow(yb - ya,2));
	 AC = sqrt(pow(xc - xa,2) + pow(yc - ya,2));
	  BC = sqrt(pow(xc - xb,2) + pow(yc - yb,2));
	  printf("\nDo dai canh AB = %.2f",AB);
	  printf("\nDo dai canh AC = %.2f",AC);
	  printf("\nDo dai canh BC = %.2f",BC);
	  
	  if(AB + AC >BC && AB + BC > AC && AC + BC > AB){
	  	printf("\nBa dinh ABC tao thanh 1 tam giac");
	  	chuvi = AB + AC + BC;
	  	printf("\nChu vi tam giac ABC = %.2f",chuvi);
	  	
	  	p= chuvi/2;
	  	dientich= sqrt(p*(p - AB)*(p - BC)*(p - BC));
	  	printf("\nDien tich tam giac = %.2f", dientich);
	  	 if(AB == AC || AB == BC || AC == BC){
	  		printf ("\n Ba dinh ABC tao thanh 1 tam giac can");
	  		
	  }else{
	  	printf("\nABC khong la tam giac can");
	  }
    }else{
    	printf("\nba dinh ABC khong tao thanh tam giac");
	}
    }
