#include <stdio.h>

#define N 1000123

int freq[N];
long long sum[N];
int arr[N];

int main() {

  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    freq[arr[i]]++;
  }

  for (int i = N - 5; i >= 0; --i) {
    sum[i] = freq[i] * 1LL * i;
    sum[i] += sum[i + 1];
  }

  for (int i = 0; i < n; i++) {
    printf("%lld ", sum[arr[i] + 1]);
  }

  return 0;
}
