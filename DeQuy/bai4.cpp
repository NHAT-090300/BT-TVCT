//tong cac phan tu trong mang

#include <stdio.h>
#include <math.h>
int Sum(int S[50], int n) {
    if(n == 0) return 0;
    else {
        return S[n-1] + S[n-2];
    }
}
int main() {
    int S[5] = {0, 2, 3, 4, 6};
    printf("%d ", Sum(S, 5));
    return 0;
}