// Kadane's Algorithm

#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin >> num;
    int currentssum = 0, maxsum = 0;
    int arr[1000];
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++) {
        currentsum = currentsum + arr[i];
        if (currentsum < 0) {
            currentsum = 0;
        }
        maxsum = max(currentsum, maxsum);
    }
    cout << maxsum << endl;
    return 0;
}