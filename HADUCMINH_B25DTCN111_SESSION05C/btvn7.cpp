#include <stdio.h>

int main() {
    char kyTu;

    printf("Nh?p v�o m?t k� t? duy nh?t: ");
    scanf(" %c", &kyTu);

    
    if (kyTu >= 'a' && kyTu <= 'z') {
        
        char chuHoa = kyTu - 32;
        printf("Chu hoa tuong ung l�: %c\n", chuHoa);
    }
   
    else if (kyTu >= 'A' && kyTu <= 'Z') {
        
        char chuThuong = kyTu + 32;
        printf("Chu thuong tuong ung l�: %c\n", chuThuong);
    }
  
    else {
        printf("Kh�ng phai chu c�i.\n");
    }

    return 0;
}
