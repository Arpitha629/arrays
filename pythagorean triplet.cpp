#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i] = arr[i] * arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = n - 1; i >= 2; i--) {
        int left = 0, right = i - 1;

        while (left < right) {
            if (arr[left] + arr[right] == arr[i]) {
                cout << "YES";
                return 0;
            } else if (arr[left] + arr[right] < arr[i]) {
                left++;
            } else {
                right--;
            }
        }
    }

    cout << "NO";
    return 0;
}
