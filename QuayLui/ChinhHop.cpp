#include <stdio.h>

int S[100], n, k;
void ChinhHop(int j) {
    int i;
    if(j == 1+k) {
        for(int i = 1; i <= k; i++) {
            printf("%d", S[i]);
        }
        printf("\n");    
    } else {
        for(int i = 1; i <= n; i++) {
            S[j] = i;
            ChinhHop(j+1);
        }
    }
}

int main() {
    printf("nhap n = ");
    scanf("%d", &n);
    printf("nhap k = ");
    scanf("%d", &k);
    ChinhHop(1);
    return 0;
}