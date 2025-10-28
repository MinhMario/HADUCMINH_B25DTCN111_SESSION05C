#include<stdio.h>

int main(){
	int dien;
	int hotieudung;
	float tien=0;
	double tongtien=0;
	printf("Nhap so dien tieu dung");
	scanf("%d",&dien);
	printf("Nhap ho tieu dung (1-3):");
	scanf("%d",&hotieudung);

	float phuphigiadinh=0.05;
	float phuphikinhdoanh=0.1;
	float phuphisanxuat=0.08;
	const float PRICE_LEVEL1=1500,PRICE_LEVEL2=2000,PRICE_LEVEL3=2500,PRICE_LEVEL4=3000;
	if(dien>0&&dien<=50){
	 tien=dien*PRICE_LEVEL1;
	
	}else if(dien>50&&dien<=100){
	 tien=(dien-50)*PRICE_LEVEL2+50*PRICE_LEVEL1;
		
	}else if(dien>100&&dien<=200){
	 tien=(dien-100)*PRICE_LEVEL3+50*PRICE_LEVEL2+50*PRICE_LEVEL1;
	
	}else if(dien>200){
	 tien=(dien-200)*PRICE_LEVEL4+100*PRICE_LEVEL3+50*PRICE_LEVEL2+50*PRICE_LEVEL1;
	}else{
		printf("Khong phu hop");
	}
	switch (hotieudung){
		case 1:
			tongtien=tien+tien*phuphigiadinh;
			printf("Tong tien phai tra la:%lf",tongtien);
			break;
			case 2:
				tongtien=tien+tien*phuphikinhdoanh;
				printf("Tong tien phai tra la:%lf",tongtien);
				break;
				case 3:
					tongtien=tien+tien*phuphisanxuat;
					printf("Tong tien phai tra la:%lf",tongtien);
					break;
				default:
					printf("Khong phu hop");
				}
				return 0;
			}
	
