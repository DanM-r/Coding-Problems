#include <stdint.h>
#include <stdio.h>

int main() {
  uint32_t w = 0;
  scanf("%u", &w);
  printf((w % 2 == 0) && (w != 2) ? "YES" : "NO");
}
