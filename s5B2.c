#include <stdio.h>
int main() {
    int n = 50; 
    int m; 

    printf("Nhap mot so:\n", n);
    do {
        scanf("%d", &m);
        if (m != n) {
            printf("So khong dung. Hay nhap lai: ");
        }
    } while (m != n); 
    	printf("Chuannn: %d\n", n);
    return 0;
}
