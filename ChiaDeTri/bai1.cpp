#include <stdio.h>

int Min(int n, int S[50]) {
    if(n <= 0) return 0;
    if(n == 1) return S[0];
    else {
        if(S[n-1] < Min(n-1, S)) return S[n-1];
        else {
            return Min(n-1, S);
        }
    }
}
int chiaDetri(int S[50], int n) {
    if(Min(n/2, S) > Min(n+1, S)) return Min(n+1/2,S);
    else return Min(n/2, S);
}

int main() {
    int n, S[50];
    printf("nhap gia tri n = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("nhap gia tri thu %d = ", i);
        scanf("%d", &S[i]);
    }
    printf(" gia tri nho nhat la %d \n", chiaDetri(S, n));
    return 0;
}