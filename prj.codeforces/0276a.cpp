// 2022 by Polevoy Dmitry under Free Public License 1.0.0
// https://codeforces.com/problemset/problem/276/A
//

#include <algorithm>
#include <iostream>
#include <limits>
 
int main() {
  int n = 0;
  int k = 0;
  std::cin >> n >> k;
  int f = 0;
  int t = 0;
  int pl = 0;
  int pl_max = std::numeric_limits<int>::min();
  for (int i = 0; i < n; i += 1) {
    std::cin >> f >> t;
    pl = t < k ? f : f - (t - k);
    pl_max = std::max(pl, pl_max);
  }
  std::cout << pl_max << '\n';
  return 0;
}