#include <stdio.h>

int GT(int n) {
    if(n < 0) return 0;
    if(n == 0) return 1;
    else {
        return n*GT(n-1);
    }
}
int main() {
    int n;
    printf("nhap n = ");
    scanf("%d", &n);
    printf("%d! = %d", n, GT(n));
    return 0;
}