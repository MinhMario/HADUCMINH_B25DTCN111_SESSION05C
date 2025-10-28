#include<stdio.h>

int main(){
	float heSoLuong;
    int soNgayCong;
    int chucVu;

    long phuCap = 0;
    long thuong = 0;
    
    double luong;

    printf("Nhap he so luong: ");
    scanf("%f", &heSoLuong);

    printf("Nhap so ngày công trong tháng: ");
    scanf("%d", &soNgayCong);

    printf("Nhap chuc vu (1: Nhân viên, 2: To truong, 3: Quan lý): ");
    scanf("%d", &chucVu);
    
    switch(chucVu){
    	case 1: 
            phuCap = 500000;
            break;
        case 2: 
            phuCap = 1000000;
            break;
        case 3: 
            phuCap = 2000000;
            break;
        default:
        
            printf("Loichucvu");
            }
            if (soNgayCong>26){
            	thuong = (soNgayCong - 26) * 200000;
    }
     luong = (double)soNgayCong * 160000 * heSoLuong + phuCap + thuong;
     printf("Luong cua ban la %lf",luong);
     return 0;
     }

        
