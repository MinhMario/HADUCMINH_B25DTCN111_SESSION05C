#include<stdio.h>

int main(){
	int diemTB;
	printf("Nhap vao diem:");
	scanf("%d",&diemTB);
	if(diemTB<0||diemTB>10){
		printf("Vui long nhap vao 1-10:\n");
	} 
    else if(diemTB >= 8.0)  {
            printf("Xep loai: Hoc luc gioi\n");
        } 
        else if (diemTB >= 6.5) {
           
            printf("Xep loai: Hoc luc kha\n");
        } 
        else if (diemTB >= 5.0) {
            
            printf("Xep loai: Hoc luc trung binh\n");
        } 
        else {
            
            printf("Xep loai: Hoc luc yeu\n");
        }
    return 0;
    }
