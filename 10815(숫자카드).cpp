// 10815 : 숫자 카드
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a, b;
    vector<int> v1, v2;

    cin >> a;
    while (a--) {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    cin >> b;
    while (b--) {
        int x;
        cin >> x;
        v2.push_back(x);
    }

    sort(v1.begin(), v1.end());

    for (int x : v2) {
        cout << binary_search(v1.begin(), v1.end(), x) << ' ';
    }

    return 0;
}
