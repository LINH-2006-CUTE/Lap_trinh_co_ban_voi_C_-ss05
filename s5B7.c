#include <stdio.h>
int main() {
  int a, b, du, ucln;
  printf("Nhap 2 so nguyen duong: ");
  scanf("%d %d", &a, &b);
  if (a <= 0 || b <= 0) {
    printf("Nhap lai di:\n");
    return 1;
  }
  while (b != 0) {
    du = a % b;
    a = b;
    b = du;
  }
  ucln = a;
  printf("Uoc chung lon nha cua  %d va %d la: %d\n", a, b, ucln);

  return 0;
}
