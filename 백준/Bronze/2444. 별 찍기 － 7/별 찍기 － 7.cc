#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N; cin >> N;
    // 위쪽
    for (int i = 1; i <= N; i++) {
        for (int s = 0; s < N - i; s++) cout << ' ';
        for (int star = 0; star < i*2 - 1; star++) cout << '*';
        cout << '\n';
    }
    // 아래쪽
    for (int i = N - 1; i >= 1; i--) {
        for (int s = 0; s < N - i; s++) cout << ' ';
        for (int star = 0; star < i*2 - 1; star++) cout << '*';
        cout << '\n';
    }
    return 0;
}