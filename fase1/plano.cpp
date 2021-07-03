#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    int s = 0;
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        s += m;
    }
    cout << x * (n + 1) - s << endl;
    return 0;
}
