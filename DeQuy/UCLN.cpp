#include <stdio.h>

int UCLN(int a, int b) {
    if(b == 0) return a;
    if(a%b == 0) return b;
    else {
        return UCLN(b, a%b);
    }
}
int BCNN(int a, int b, int UCLN) {
    int BCNN = a*b/UCLN;
    return BCNN;
}
int main() {
    int a, b;
    printf("nhap a = ");
    scanf("%d", &a);
    printf("nhap b = ");
    scanf("%d", &b);
    printf("UCLN cua %d, %d la %d \n", a, b, UCLN(a, b));
    printf("UCLN cua %d, %d la %d \n", a, b, BCNN(a, b, UCLN(a, b)));
    return 0;
}



