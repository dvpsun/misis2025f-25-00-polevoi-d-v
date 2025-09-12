// 2022 by Polevoy Dmitry under Free Public License 1.0.0
// source https://codeforces.com/problemset/problem/978/A
 
#include <iostream>
#include <vector>
 
int main() { 
  int n = 0;
  std::cin >> n;
  std::vector<int> arr(n, 0);
  for (int i = 0; i < n; i += 1) {
    std::cin >> arr[i];
  }
 
  std::vector<int> res;
  res.reserve(n);
  for (int i = n - 1; 0 <= i; i -= 1) {
    int i_unique = 0;
    for (; i_unique < std::ssize(res); i_unique += 1) {
      if (arr[i] == res[i_unique]) {
        break;
      }
    }
    if (std::ssize(res) == i_unique) {
      res.push_back(arr[i]);
    }
  }
  const int n_res = std::ssize(res);
  for (int i = 0; i < n_res / 2; i += 1) {
    std::swap(res[i], res[n_res - i - 1]);
  }
 
  std::cout << n_res << std::endl;;
  for (int i = 0; i < n_res; i += 1) {
    std::cout << res[i] << ' ';
  }
  std::cout << std::endl;
}