#include <iostream>
#include <vector>
typedef std::vector<int> vi;
using namespace std;

void generateSubsets(const vi &nums, vi &current, int index,
                     vector<vi> &result) {
  if (current.size() == 3) {
    result.push_back(current);
    return;
  }

  for (int i = index; i < nums.size(); i++) {
    current.push_back(nums[i]);
    generateSubsets(nums, current, i + 1, result);
    current.pop_back();
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, f, temp;
  vector<int> cards;
  cin >> N >> f;

  for (int i = 0; i < N; i++) {
    cin >> temp;
    cards.push_back(temp);
  }

  vector<vi> result;
  vi current;
  generateSubsets(cards, current, 0, result);

  for (vi a : result) {
    int sum = 0;
    for (int b : a) {
      sum += b;
    }
    if (sum > f) {
      continue;
    } else {
      temp = (temp < sum) ? sum : temp;
    }
  }
  cout << temp;

  return 0;
}
