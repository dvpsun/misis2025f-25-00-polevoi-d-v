// 2022 by Polevoy Dmitry under Free Public License 1.0.0
// source https://codeforces.com/problemset/problem/978/B
 
#include <iostream>
#include <string>
 
int main() { 
  int n = 0;
  std::string name;
  std::cin >> n >> name;
  int count_x = 0;
  int count_removed = 0;
 
  for (int i = 0; i < n; i += 1) {
    if ('x'!= name[i]) {
      count_x = 0;
    } else {
      count_removed += (1 < count_x) ? 1 : 0;
      count_x += 1;
    }
  }
  std::cout << count_removed << std::endl;
}