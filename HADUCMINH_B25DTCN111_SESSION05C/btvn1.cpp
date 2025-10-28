#include<stdio.h>

int main(){
	int a;
	int b;
	printf("nhap so dau tien");
	scanf("%d",&a);
	printf("Nhap so thu hai");
	scanf("%d",&b);
	 if(a>b){
	 	printf("So lon hon la %d",a);
	 }else if(b==a){
	 	printf("hai so bang nhau");
	 }else{
	 	printf("So lon hon la %d",b);
	 }
	 return 0;
}
	
