#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <tuple>
#include <vector>
using namespace std;
using ull = unsigned long long;
namespace pc::math {
ull gcd(ull a, ull b) { return b ? gcd(b, a % b) : a; }
}
namespace pcm = pc::math;
