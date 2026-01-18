#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;

    int count[26] = {0};
    for (char &c : s) {
        c = toupper(c);
        count[c - 'A']++;
    }

    int maxcount = 0;
    char result = '?';

    for (int i = 0; i < 26; i++) {
        if (count[i] > maxcount) {
            maxcount = count[i];
            result = 'A'+i;
        } else if (count[i] == maxcount) {
            result = '?';
        }
    }
    cout << result;

    return 0;
}