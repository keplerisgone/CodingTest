#include <bits/stdc++.h>

using namespace std;

void bubble_sort (vector<int>& vec);
vector<int> merge_sort(vector<int>& vec);
vector<int> merge (vector<int>& vec1, vector<int> vec2); 

void bubble_sort (vector<int>& vec) {
	int n = vec.size();
	for (int i = n-1; i > 0 ; i--) {
		for (int j = 0; j < i; j++) {
			if (vec[j] > vec[j + 1]) swap(vec, j, j+1);
		}
	}
}

vector<int> merge_sort(vector<int>& vec) {
	int n = vec.size();

	// 1. 개수가 하나라면 반환
	// 2. 절반으로 나누어 각각 정렬한 것을 반환
	// 3. 정렬의 방식은 맨 앞 원소 비교 (O(n))

	vector<int> slicedA(vec.begin(), vec.begin() + n/2);
	vector<int> slicedB(vec.begin() + n/2, vec.end());

	if (n == 1) return vec;

	vector<int> sortedA = merge_sort(slicedA);
	vector<int> sortedB = merge_sort(slicedB);

	return merge_vector(sortedA, sortedB);
}

vector<int> merge_vector(vector<int>& vec1, vector<int>& vec2) {
	auto it1 = vec1.begin();
	auto it2 = vec2.begin();

	vector<int> temp;

	while (it1 != vec1.end() && it2 != vec2.end()) {
		if (*it1 > *it2) {
			temp.push_back(*it2);
			it2++;
		} else {
			temp.push_back(*it1);
			it1++;
		}		
	}

	if (it1 == vec1.end()) {
		for (; it2 != vec2.end() ; it2++) {
			temp.push_back(*it2);
		}
	}
	else {
		for (; it1 != vec1.end() ; it1++) {
			temp.push_back(*it1);
		}
	}

	return temp;
}

void counting_sort(vector<int>& vec) {
    if (vec.empty()) return; // 빈 벡터 처리

    // 1. 입력 데이터의 최대값과 최소값 계산
    int max_val = *max_element(vec.begin(), vec.end());
    int min_val = *min_element(vec.begin(), vec.end());
    int range = max_val - min_val + 1; // 데이터의 범위

    // 2. 카운트 배열 초기화
    vector<int> count(range, 0);

    // 3. 데이터 값의 빈도 계산
    for (int val : vec) {
        count[val - min_val]++;
    }

    // 4. 원본 배열을 정렬된 순서로 채우기
    int index = 0;
    for (int i = 0; i < range; i++) {
        while (count[i] > 0) {
            vec[index++] = i + min_val;
            count[i]--;
        }
    }
}