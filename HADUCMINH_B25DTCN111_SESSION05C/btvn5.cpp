#include<stdio.h>

int main(){
	int tuoi;
	printf("nhap so tuoi");
	scanf("%d",&tuoi);
	if(tuoi<0||tuoi>100){
		printf("tuoi khong hop le");
		}else{
			if(tuoi <6){
				printf("Mien phi");
				}else if(tuoi>6&&tuoi<18){
					float gia=20000*0.5;
					printf("gia ve la:%f\n",gia);
					}else if(tuoi>18&&tuoi<60){
						int gia2=20000;
					printf("gia ve phai tra la:%d",gia2);
						}else if(tuoi>60){
							float gia3=20000-20000*0.07;
							printf("gia ve phai tra la:%f",gia3);
							}
		}
		return 0;
		}
