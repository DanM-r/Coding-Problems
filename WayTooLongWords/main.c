#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

int main() {
  int32_t n = 0;
  scanf("%d", &n);

  char str[n][11];
  int32_t strSizes[n];
  getchar();

  for (int32_t i = 0; i < n; ++i) {
    strSizes[i] = 0;
    char ch = getchar();
    while (ch != '\n') {
      if (strSizes[i] <= 9) {
        str[i][strSizes[i]] = ch;
      } else {
        str[i][9] = ch;
      }
      ++strSizes[i];
      ch = getchar();
    }
    if (strSizes[i] >= 10) {
      str[i][10] = '\0';
    } else {
      str[i][strSizes[i]] = '\0';
    }
  }

  for (int32_t i = 0; i < n; ++i) {
    if (strSizes[i] <= 10) {
      printf("%s\n", str[i]);
    } else {
      printf("%c%d%c\n", str[i][0], strSizes[i] - 2, str[i][9]);
    }
  }
}
