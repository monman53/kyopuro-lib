#include "common.hpp"

namespace pc::math {

ull gcd(ull a, ull b) { return b ? gcd(b, a % b) : a; }

} // namespace pc::math

namespace pcm = pc::math;
