#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int t;

const int N = 101;

int al;
int bl;

int min(int x, int y) { return x >= y ? y : x; }

int main() {
  char a[N];
  char b[N];
  scanf("%d", &t);

  for (int i = 0; i < t; ++i) {
    scanf("%s", a);
    al = strlen(a);
    scanf("%s", b);
    bl = strlen(b);

    int ans = al + bl;
    for (int i = 0; i < bl; ++i) {
      int j = i;
      for (int k = 0; k < al; ++k) {
        if (j < bl && a[k] == b[j])
          j++;
      }
      ans = min(ans, bl + al - (j - i));
    }

    printf("%d\n", ans);
  }
}
