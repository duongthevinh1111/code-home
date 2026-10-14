#include<stdio.h>
int main (){
	float d_toan , d_ly , d_anh, d_tong;
	printf("Nhap vao diem 3 mon toan ly anh:");
	scanf("%f%f%f", &d_toan, &d_ly,&d_anh);
	// y2
	d_tong = d_toan + d_ly + d_anh;
	printf("\n Diem tong cua thi sinh la: %.2f",d_tong);
	//y3
	int k;
	float diem_cong;
	do{
		printf("\n Nhap vao khu vuc cua ban : ");
		scanf("%d",&k);
		switch(k){
			case 1:
				printf("\n Diem cong cua thi sinh la 1");
				diem_cong = 1;
				break;
			
			case 2:
			    printf("\n Diem cong cua thi sinh la 0.5");
			    diem_cong = 0.5;
			    break;
				
			case 3:
			    printf("\n Diem cong cua thi sinh la 0");
			    diem_cong = 0;
				break;
				
			default:
			printf("\n Yeu cau nhap lai k!");			
		}
		
	}while(k!=1 && k!=2 && k!=3);
	float Ket_qua = d_tong + diem_cong;
	printf("\n Ket qua cua thi sinh = %.2f",Ket_qua);
}
