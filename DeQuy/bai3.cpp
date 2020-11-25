// S(n) = 1 + 1/2 + 1/3 + 1/4

#include <stdio.h>

float Sum(int n) {
    if(n == 0) return 0;
    else return (float)1/n + Sum(n-1);
}

int main() {
    int n;
    printf("nhap n = ");
    scanf("%d", &n);
    printf("kq = %0.4f", Sum(n));
    return 0;
}