// S(n) = 1 + 1/le 

#include <stdio.h>

float Sum(int n) {
    if(n == 0) return 1;
    else return (float)1/(2*n+1) + Sum(n-1);
}

int main() {
    int n; 
    printf("nhap n = ");
    scanf("%d", &n);
    printf("kq = %0.4f", Sum(n));
    return 0;
}