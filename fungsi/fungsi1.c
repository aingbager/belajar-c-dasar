#include <stdio.h>

int angka(int a, int b) { return a + b; }

int main() {
  int a, b;
  printf("masukan angka pertama: ");
  scanf("%d", &a);
  printf("masukan angka kedua: ");
  scanf("%d", &b);

  int hasil = angka(a, b);
  printf("hasilnya : %d\n", hasil);

  return 0;
}
