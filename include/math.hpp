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

} // namespace pc::math

namespace pcm = pc::math;
