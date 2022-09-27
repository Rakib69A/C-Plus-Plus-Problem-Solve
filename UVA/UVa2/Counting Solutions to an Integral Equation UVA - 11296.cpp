
#include <cstdio>
int main() {
  int n;
  while (scanf("%d", &n) != EOF) {
    long long ans = 0;
    for (int i = 0; i + i <= n; ++i) {
      ans = ans + i + 1;
    }
    printf("%lld\n", ans);
  }
  return 0;
}
