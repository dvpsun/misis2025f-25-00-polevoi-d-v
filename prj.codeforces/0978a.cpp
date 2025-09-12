// 2022 by Polevoy Dmitry under Free Public License 1.0.0
// source https://codeforces.com/problemset/problem/978/A

#include <iostream>
#include <vector>
 
int main() {
  std::vector<int> c(1001, 0);
  int n_unique = 0;
  int n = 0;
  std::cin >> n;
  std::vector<int> a(n, 0);
  for (int i = 0; i < n; i += 1) {
    std::cin >> a[i];
    n_unique += 0 == c[a[i]] ? 1 : 0;
    c[a[i]] += 1;
  }
  std::cout << n_unique << '\n';
  for (int i = 0; i < std::ssize(a); i += 1) {
    if (1 == c[a[i]]) {
      std::cout << a[i] << ' ';
    } else {
      c[a[i]] -= 1;
    }
  }
  return 0;
}