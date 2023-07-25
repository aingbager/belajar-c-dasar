#include <stdio.h>

int main() {
  int a = 5;

  // Contoh lambda function dengan capture list dan tanpa parameter
  auto lambda1 = [a]() -> int { return a * 2; };

  // Contoh lambda function dengan capture list dan parameter
  auto lambda2 = [a](int x) -> int { return a + x; };

  // Memanggil lambda function
  int result1 = lambda1();  // Hasil: 10 (nilai a = 5, 5 * 2 = 10)
  int result2 = lambda2(3); // Hasil: 8 (nilai a = 5, 5 + 3 = 8)

  printf("Hasil lambda1: %d\n", result1);
  printf("Hasil lambda2: %d\n", result2);

  return 0;
}
