#include <stdio.h>

int t;
const int N = 2 * 10e5;

int min(int x, int y) { return x >= y ? y : x; }

int max(int x, int y) { return x >= y ? x : y; }

void sort(int **a, int **b, int count);

void swap(int *a, int *b);

int main() {
  int a[N];
  int b[N];

  scanf("%d", &t);

  int n = 0;
  for (int i = 0; i < t; ++i) {
    scanf("%d", &n);

    for (int j = 0; j < n; ++j) {
      scanf("%d", &a[j]);
    }

    for (int j = 0; j < n; ++j) {
      scanf("%d", &b[j]);
    }

    int x = 0;
    int y = 0;
    sort((int **)&a, (int **)&b, n);

    for (int l = 0; l < n; l++) {
      printf("%d %d", a[l], b[l]);
    }

    printf("%d", min(x, y));
  }
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void sort(int *(a[]), int *(b[]), int count) {
  for (int i = 1; i < count; ++i) {
    int j = i;
    while ((*a)[j - 1] == (*b)[j - 1]) {
      swap(&((*a)[j - 1]), &((*a)[j]));
      swap(&((*b)[j - 1]), &((*b)[j]));
      j--;
    }
  }
}
