#include <stdio.h>

void sort(int S[50], int n) {
    int t;
    if(n == 1) return; 
    else {
        sort(S, n-1);
        if(S[n-1] < S[n-2]) {
            t = S[n-1];
            S[n-1] = S[n-2];
            S[n-2] = t;   
            return sort(S, n-1);
        }
    }
}

int main() {
    int S[5] = {3, 5, 2, 4, 1};
    sort(S, 5);
    for(int i = 0; i < 5; i++) {
        printf("%d \t", S[i]);
    }
    return 0;
}
