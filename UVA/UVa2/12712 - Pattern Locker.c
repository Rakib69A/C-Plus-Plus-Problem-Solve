
#include <stdio.h>

int main() {
  long long mod = 1e13 + 7;
  int T, C = 1;
  scanf("%d", &T);
  while (T--) {
    int L, M, N;
    scanf("%d%d%d", &L, &M, &N);
    L *= L;
    long long i, ans = 0, sum = 1;
    for (i = 0; i < M - 1; i++) {
      sum = (sum * (L - i)) % mod;
    }
    for (; M <= N; M++) {
      sum = (sum * (L - M + 1)) % mod;
      ans = (ans + sum) % mod;
    }
    printf("Case %d: %lld\n", C++, ans);
  }
  return 0;
}
