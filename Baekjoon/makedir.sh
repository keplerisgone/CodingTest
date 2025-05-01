#!/bin/bash

# 문제 번호 입력받기
echo "문제 번호를 입력하세요 (예: 1000):"
read problem_number

# 기본 디렉토리 설정 (b<문제 번호>)
base_dir="b$problem_number"

# 디렉토리 생성
mkdir -p "$base_dir"

# 파일 생성
echo "문제 설명을 기록하는 파일을 생성합니다: $base_dir/문제.md"
cat > "$base_dir/문제.md" <<EOL
# 문제 설명

문제 번호: $problem_number

## 문제 설명
(문제를 여기에 작성하세요)

## 입력
(입력 설명을 여기에 작성하세요)

## 출력
(출력 설명을 여기에 작성하세요)
EOL

echo "풀이 과정을 기록하는 파일을 생성합니다: $base_dir/풀이.md"
cat > "$base_dir/풀이.md" <<EOL
# 풀이 과정

문제 번호: $problem_number

## 접근 방식
(어떻게 문제를 해결했는지 작성하세요)

## 시간 복잡도
(시간 복잡도를 분석하세요)

## 느낀 점
(문제를 푼 소감을 작성하세요)
EOL

echo "코드를 기록하는 파일을 생성합니다: $base_dir/solution.py"
cat > "$base_dir/solution.cpp" <<EOL
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    return 0;
}
EOL

echo "입출력 예제를 기록하는 파일을 생성합니다: $base_dir/input.txt"
cat > "$base_dir/input.txt" <<EOL

EOL

echo "폴더와 파일이 성공적으로 생성되었습니다: $base_dir"
tree "$base_dir"  # 생성된 폴더 구조를 확인
