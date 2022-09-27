
#include <stdio.h>

int main() {
  int B, N;
  while (scanf("%d%d", &B, &N) && B || N) {
    int i, res[99];
    for (i = 1; i <= B; i++) {
      scanf("%d", &res[i]);
    }
    while (N--) {
      int d, c, v;
      scanf("%d%d%d", &d, &c, &v);
      res[d] -= v;
      res[c] += v;
    }
    int ok = 1;
    for (i = 1; i <= B; i++) {
      if (res[i] < 0) {
        ok = 0;
      }
    }
    puts(ok ? "S" : "N");
  }
  return 0;
}
