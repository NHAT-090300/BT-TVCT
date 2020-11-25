#include <stdio.h>

int main() {
    int S[50][50], n, m, a;
    printf("Nhap n = ");
    scanf("%d", &n);
    for(int i = 0; i < 4; i++) {
        if(i == 0 ) printf("Nhap ten : \n"); 
        if(i == 1 ) printf("Nhap trong luong: \n");
        if(i == 2 ) printf("Nhap gia tri: \n");
        if(i == 3 ) printf("Nhap don gia: \n");
        for(int j = 0; j < n; j++) {
            printf("S[%d][%d] = ", i, j);
            scanf("%d", &S[i][j]);
        }
    }

    for(int i = 0; i < 4; i++) {
        if(i == 0 ) printf("Nhap ten :         "); 
        if(i == 1 ) printf("Nhap trong luong:  ");
        if(i == 2 ) printf("Nhap gia tri:      ");
        if(i == 3 ) printf("Nhap don gia:      ");
        for(int j = 0; j < n; j++) {
            printf("\t %d ", S[i][j]);
        }
        printf("\n");
    }

    printf("Nhap TRONG LUONG cua BALO  m = ");
    scanf("%d", &m);

    for(int i = 0; i < n; i++) {
        a = m/S[1][i];
        if(a) {
            printf("%d --- %d \n", a, S[0][i]);
        }
        m = m%S[1][i];
    }
    return 0;
}