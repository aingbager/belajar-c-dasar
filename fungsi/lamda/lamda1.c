#include <stdio.h>

int main() {
  int a;
  auto lamda1 = [a]() -> int { return a * 2; }

                         auto lamda2 = [a](int x) -> int { return a + x; }

                                                     int result = lamda1();
  int result2 = lamda2(3);

  printf("&d", result);
  printf("&d", result2);
}
