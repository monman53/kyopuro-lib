#include "math.hpp"

#define PROBLEM                                                                \
  "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A"

int main() {
  ull n;
  cin >> n;
  const auto ans = pcm::prime<>::factor(n);
  cout << n << ":";
  for (auto pn : ans) {
    auto p = pn.first;
    auto n = pn.second;
    for (int i = 0; i < n; i++) {
      cout << " " << p;
    }
  }
  cout << endl;
  return 0;
}
