#include<stdio.h>

int main(){ 
	double a,b;
	char op;
	printf("Nhap a");
	scanf("%lf",&a);
	printf("Nhap b");
	scanf("%lf",&b);
   	printf("Nhap ki tu toan tu(+, -, *, /): ");
    scanf(" %c",&op);
      switch (op) {
        case '+':
            printf("Ket qua: %.2lf + %.2lf = %.2lf\n", a, b, a + b);
            break;

        case '-':
            printf("Ket qua: %.2lf - %.2lf = %.2lf\n", a, b, a - b);
            break;

        case '*':
            printf("Ket qua: %.2lf * %.2lf = %.2lf\n", a, b, a * b);
            break;

        case '/':
            
            if (b == 0) {
                printf("Loi: Khong the chia cho 0\n");
            } else {
                printf("Ket qua: %.2lf / %.2lf = %.2lf\n", a, b, a / b);
            }
            break;

        default:
            printf("Loi: Toan tu khong hop le\n");
            break;
    }

    return 0; 
}
