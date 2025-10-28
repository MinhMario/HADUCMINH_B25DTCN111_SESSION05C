#include<stdio.h>

int main(){
	int a;
	int b;
	printf("Nhap vao so a");
	scanf("%d",&a);
	printf("Nhap vao so b");
	scanf("%d",&b);
	if(a==0 && b==0){
		printf("Phuong trinh co vo so nghiem");
	}else if(a==0 && b!=0){
		printf("Phuong trinh vo nghiem");
	}else{
		float x=-b/a;
		printf("Phuong trinh co mot nghiem duy nhat %f",x);
	}
	return 0;
}
