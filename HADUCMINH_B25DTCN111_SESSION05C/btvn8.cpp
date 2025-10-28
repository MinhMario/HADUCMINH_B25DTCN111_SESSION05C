#include<stdio.h>

int main(){
	int nuoc;
	printf("yeu cau nhap so nuoc");
	scanf("%d",&nuoc);
	if(nuoc>0&&nuoc<10){
		float tien1= nuoc*6000;
		printf("So tien phai tra la:%f",tien1);
		}else if(nuoc>10&&nuoc<20){
			float tien2=(nuoc-10)*7000+10*6000;
			printf("So tien phai tra la:%f",tien2);
			}else if(nuoc>20&&nuoc<30){
				float tien3=(nuoc-20)*8500+10*6000+10*7000;
				printf("So tien phai tra la:%f",tien3);
				}else if(nuoc>30){
					float tien4=(nuoc-30)*10000+10*6000+10*7000+10*8500;
					printf("So tien phai tra la:%f",tien4);
					}else{
						printf("Khong hop le");
					}
					return 0;
					}
