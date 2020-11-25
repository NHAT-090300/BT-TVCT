#include <stdio.h>

void chuyen(int n, char x, char y, char z) {
    if( n == 1) printf("\n %c  ----> %c", x, y);
    else {
        chuyen(n-1, x, z, y);
        chuyen(1, x, y, z);
        chuyen(n-1, z, y, x);
    }
}

int main() {
    int n;
    printf("nhap so luong dia can chuyen : ");
    scanf("%d", &n);
    chuyen(n, 'A', 'B', 'C');
    return 0;
}