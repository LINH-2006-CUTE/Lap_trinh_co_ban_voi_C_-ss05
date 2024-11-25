#include <stdio.h>
int main() {
  int n, i, tong;
  printf("Nhap so: ");
  scanf("%d", &n);
  for (i = 0; i <= n; i++){
    tong += i;
  }
  printf("Tong tu 1 den %d la: %d\n", n, tong);
  return 0;
}
