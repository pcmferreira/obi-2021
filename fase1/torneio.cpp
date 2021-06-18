#include <bits/stdc++.h>

using namespace std;

int main() {
    int r = 0;
    for (int i = 0; i < 6; ++i) {
        char x;
        cin >> x;
        if (x == 'V') r++;
    }
    if (r >= 5) cout << "1\n";
    else if (r >= 3) cout << "2\n";
    else if (r >= 1) cout << "3\n";
    else cout << "-1\n";
    return 0;
}
