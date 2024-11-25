#include <bits/stdc++.h>

using namespace std;

struct Info {
    string name;
    int day;
    int month;
    int year;

    // 주의사항 : 나이 비교임, 대상의 나이가 많으려면...
    bool operator>(const Info& other) const {
        if (year == other.year) {
            if (month == other.month) {
                return day < other.day; // 날짜가 더 빨라야 함
            }
            
            return month < other.month;
        }
        return year < other.year;
    }
    bool operator<(const Info& other) const {
        if (year == other.year) {
            if (month == other.month) {
                return day > other.day; // 날짜가 더 늦으면 나이가 적음
            }
            return month > other.month;
        }
        return year > other.year; // 연도가 크면 나이가 적음
    }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    priority_queue<Info, vector<Info>, less<Info> > max_heap; // 나이가 많은 
    priority_queue<Info, vector<Info>, greater<Info> > min_heap;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string temp_name;
        int temp_day, temp_month, temp_year;
        cin >> temp_name >> temp_day >> temp_month >> temp_year;

        min_heap.push({temp_name, temp_day, temp_month, temp_year});
        max_heap.push({temp_name, temp_day, temp_month, temp_year});
    }

    cout << min_heap.top().name << "\n" << max_heap.top().name << "\n";
    
    return 0;
}
