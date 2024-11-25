#include <stdio.h>
int main() {
    int n;
    printf("Nhap 1 so nguyen tu 1-10: ");
    scanf("%d", &n);
    if (n < 1 || n > 10) {
        printf("Hay nhap lai 1 so nguyen tu 1-10:\n");
        return 1;
    }
    printf("Bang cuu chuong cua %d la:\n", n);
    int i =1; 
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0; 
}
