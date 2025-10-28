#include<stdio.h>

int main(){
	int thunhap;
	printf("moi ban nhap thu nhap");
	scanf("%d",&thunhap);
	if(thunhap<=5){
		float thue1=thunhap * 0.05;
		printf("Thue phai dong la:%f",thue1);
		}else if(thunhap<10){
			float thue2=thunhap*0.1;
			printf("thue phai dong la:%f",thue2);
			}else{
				float thue3=thunhap*0.15;
				printf("thue phai dong la:%f",thue3);
			}
			return 0;
			}
