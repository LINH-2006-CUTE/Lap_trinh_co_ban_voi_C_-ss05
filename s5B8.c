#include <stdio.h>
int main() {
    int a, b, i, bcnn;
    printf("Nhap 2 so nguyen duong: ");
    scanf("%d %d", &a, &b);
    bcnn = (a > b) ? a : b; 
    while (1) {
        if (bcnn % a == 0 && bcnn % b == 0) {
            break; 
        }
        bcnn++;
    }
    printf("Boi chung nho nhat cua  %d va %d la: %d\n", a, b, bcnn);
    return 0;
}
