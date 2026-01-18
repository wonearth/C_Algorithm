#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[9];
    for (int i = 0; i < 9; i++) cin >> arr[i];

    int max = arr[0];
    int temp = 1;
    for (int i = 0; i < 9; i++) {
        if (arr[i] > max) {
            max = arr[i];
            temp = (i + 1);
        }
    } cout << max << "\n" << temp;

    return 0;
}