#include "math.hpp"

#define PROBLEM                                                                \
  "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_B"

int main() {
  ull a, b;
  cin >> a >> b;
  cout << pcm::gcd(a, b) << endl;
}
