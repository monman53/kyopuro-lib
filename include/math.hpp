#include "common.hpp"

namespace pc::math {

//--------------------------------
// Great Common Divisor
//--------------------------------
ull gcd(ull a, ull b) { return b ? gcd(b, a % b) : a; }

//--------------------------------
// Least Common Multiple
//--------------------------------
ull lcm(ull a, ull b) {
  const ull gcd_ = pc::math::gcd(a, b);
  return a / gcd_ * b;
}

ull lcm(ull a, ull b, ull c) { return lcm(lcm(a, b), c); }

ull lcm(std::vector<ull> a) {
  const auto n = a.size();
  assert(n > 1);
  const auto op = [](ull a, ull b) { return lcm(a, b); };
  return std::accumulate(a.begin(), a.end(), a[0], op);
}

//--------------------------------
// Prime Numbers
//--------------------------------
template <size_t n_max = 100'000> class prime {
  std::array<bool, n_max + 1> is_prime_;

public:
  prime() {
    // Sieve of Eratosthenes
    std::fill(is_prime_.begin(), is_prime_.end(), true);
    is_prime_[0] = false;
    is_prime_[1] = false;
    for (size_t i = 2; i <= n_max; i++) {
      if (is_prime_[i]) {
        for (size_t j = i * i; j <= n_max; j++) {
          is_prime_[j] = false;
        }
      }
    }
  }

  bool is_prime(ull n) {
    assert(n <= n_max * n_max);
    if (n <= n_max) {
      return is_prime_[n];
    }
    for (ull i = 2; i * i <= n; i++) {
      if (is_prime_[i]) {
        if (n % i == 0) {
          return false;
        }
      }
    }
    return true;
  }

  static std::vector<std::pair<ull, size_t>> factor(ull n) {
    std::vector<std::pair<ull, size_t>> res;
    for (ull i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        size_t cnt = 0;
        while (n % i == 0) {
          cnt++;
          n /= i;
        }
        res.push_back({i, cnt});
      }
    }
    if (n != 1) {
      res.push_back({n, 1});
    }
    return res;
  }
};

} // namespace pc::math

namespace pcm = pc::math;
