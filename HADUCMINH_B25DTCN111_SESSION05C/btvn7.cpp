#include <stdio.h>

int main() {
    char kyTu;

    printf("Nh?p vào m?t ký t? duy nh?t: ");
    scanf(" %c", &kyTu);

    
    if (kyTu >= 'a' && kyTu <= 'z') {
        
        char chuHoa = kyTu - 32;
        printf("Chu hoa tuong ung là: %c\n", chuHoa);
    }
   
    else if (kyTu >= 'A' && kyTu <= 'Z') {
        
        char chuThuong = kyTu + 32;
        printf("Chu thuong tuong ung là: %c\n", chuThuong);
    }
  
    else {
        printf("Không phai chu cái.\n");
    }

    return 0;
}
