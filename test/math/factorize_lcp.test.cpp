#include "math.hpp"

#define PROBLEM "https://judge.yosupo.jp/problem/factorize"
#define IGNORE // TODO:

int main() {
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    ull a;
    cin >> a;
    const auto ans = pcm::prime<>::factor(a);
    int cnt = 0;
    string s = "";
    for (auto pn : ans) {
      const auto p = pn.first;
      const auto n = pn.second;
      cnt += n;
      for (int i = 0; i < n; i++) {
        s += " " + to_string(p);
      }
    }
    cout << cnt << s << endl;
  }
  return 0;
}
