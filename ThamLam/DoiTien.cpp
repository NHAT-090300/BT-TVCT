#include <stdio.h>

int main() {
    int LT[50] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000, 500};
    int n, ST, TO;
    printf("nhap so tien = ");
    scanf("%d", &n);
    printf("=========Doi thanh =========\n");
    for(int i = 0; i < n; i++) {
        TO = n/LT[i];
        if(TO != 0) {
            printf("%d --- %d \n", TO, LT[i]);
        }
        n = n%LT[i];
    }
    return 0;
}