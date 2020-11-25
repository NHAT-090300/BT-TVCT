#include <stdio.h>

int find(int n, int x, int S[50]) {
    if(n < 0 || n == 0) return 0;
    else if(S[n-1] == x) return 1+find(n-1, x, S);
    else return find(n-1, x, S);
}

int main() {
    int S[50], n, x;
    printf("nhap n = ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("S[%d] = ", i);
        scanf("%d", &S[i]);
    }

    printf("nhap gia tri can tim X = ");
    scanf("%d", &x);

    printf("so lan lap la %d", find(n, x, S));
    return 0;
}