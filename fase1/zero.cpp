#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 1;
int n;
int x[maxn];

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    int r = 0;
    for (int i = 0; i < n; ++i) {
        r += x[i];
    }
    int z = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (x[i] == 0) {
            ++z;
        } else if (z) {
            --z;
            r -= x[i];
        }
    }
    cout << r << endl;
    return 0;
}
