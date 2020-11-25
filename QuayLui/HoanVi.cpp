#include <stdio.h>
int S[1000], n;
int trienVong(int k) {
    int i;
    for(int i = 1; i <= k-1; i++) {
        if(S[k] == S[i]) return 0;
    }
    return 1;
}
void HoanVi(int k) {
    if(k == n+1) {
        for(int i = 0; i <= n; i++) {
            printf("%d", S[i]);
        }
        printf("\n");
    } else {
        for(int i = 0; i <= n; i++) {
            S[k] = i;
            if(trienVong(k)) HoanVi(k+1);
        }
    }
}

int main() {
    printf("nhap n = ");
    scanf("%d", &n);
    HoanVi(1);
    return 0;
}