#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N,M; cin >> N >> M;
    vector<int> box(N+1);
    for (int i = 1; i <= N; i++) {
        box[i] = i;
    }

    int i, j;
    for (int k = 0; k < M; k++) {
        cin >> i >> j;
        swap(box[i], box[j]);
    }

    for (int i = 1; i <= N; i++) {
        cout << box[i] << " ";
    }

    return 0;
}