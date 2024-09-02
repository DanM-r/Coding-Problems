#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

int main() {
  int32_t n = 0;
  scanf("%d", &n);
  int32_t canSolve[n][3];
  int32_t numCanSolve = 0;

  for (int32_t i = 0; i < n; ++i) {
    scanf("%d %d %d", &canSolve[i][0], &canSolve[i][1], &canSolve[i][2]);

    if ((canSolve[i][0] && canSolve[i][1]) ||
        (canSolve[i][0] && canSolve[i][2]) ||
        (canSolve[i][1] && canSolve[i][2])) {
      numCanSolve++;
    }
  }

  printf("%" PRIi32, numCanSolve);
}
