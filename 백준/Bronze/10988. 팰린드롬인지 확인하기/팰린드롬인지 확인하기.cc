#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    string rev = s;  // 복사
    reverse(rev.begin(), rev.end());  // 뒤집기

    if (rev == s) cout << 1;
    else cout << 0;

    return 0;
}