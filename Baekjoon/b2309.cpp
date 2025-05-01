#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> heights;
  int n, sum = 0;
  for (int i = 0; i < 9; i++) {
    std::cin >> n;
    sum += n;
    heights.push_back(n);
  }
  std::sort(heights.begin(), heights.end());
  int diff = sum - 100;
  int idx1 = -1, idx2 = -1;

  for (int i = 0; i < 9; i++) {
    int temp = heights[i];
    if (temp >= diff) {
      continue;
    }
    for (int j = i; j < 9; j++) {
      if ((temp + heights[j]) == diff) {
        idx1 = i;
        idx2 = j;
        break;
      }
    }
    if (idx1 != -1) {
      break;
    }
  }
  heights.erase(heights.begin() + idx2);
  heights.erase(heights.begin() + idx1);

  for (auto num : heights) {
    std::cout << num << "\n";
  }

  return 0;
}
