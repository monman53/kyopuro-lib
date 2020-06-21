#include "math.hpp"

#define PROBLEM                                                                \
  "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_C"

int main() {
  size_t n;
  cin >> n;
  vector<ull> a(n);
  for (size_t i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << pcm::lcm(a) << endl;
  return 0;
}
