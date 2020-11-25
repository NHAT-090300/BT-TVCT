#include <stdio.h>
#include <math.h>

int checkSNT(int n, int d, int c) {
    if(c<d) return 1;
    if(n%d==0) return 0;
    return checkSNT(n, d + 1, c);
}

int SNT(int n) {
    return checkSNT(n, 2, sqrt(n));
}

int main() {
    int n;
    printf("nhap n = ");
    scanf("%d", &n);
    for(int i = 2; i <= n; i++) {
        if(SNT(i)) {
            printf("%d \n", i);
        }
    }
    return 0;
}

