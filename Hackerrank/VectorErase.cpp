#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, a, x, b, c;
    vector<int> v;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a;
        v.push_back(a);
    }
    cin >> x >> b >> c;
    v.erase(v.begin() + x - 1);
    v.erase(v.begin() + b - 1, v.begin() + c - 1);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}
