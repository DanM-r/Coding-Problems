#include <stdio.h>

int n;

int main() {
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    int xi, yi;

    scanf("%d %d", &xi, &yi);

    if (yi <= -2) {
      printf("NO\n");
    } else {
      printf("YES\n");
    }
  }
}
