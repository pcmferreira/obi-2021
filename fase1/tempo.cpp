#include <bits/stdc++.h>

using namespace std;

const int maxn = 101;
bool e[maxn];
bool r[maxn];
int t[maxn];

int main() {
    for (int i = 0; i < maxn; ++i) {
        e[i] = false;
        r[i] = false;
        t[i] = 0;
    }
    int n;
    cin >> n;
    int ct = 1;
    for (int i = 0; i < n; ++i) {
        char ch;
        int x;
        
        cin >> ch >> x;

        if (ch == 'T') {
            ct = x;
        } else {
            for (int j = 1; j < maxn; ++j) {
                if (r[j]) t[j] += ct;
            }

            if (ch == 'R') {
                e[x] = true;
                r[x] = true;
            } else if (ch == 'E') {
                r[x] = false;
            }
            
            ct = 1;
        }

    }
    for (int i = 1; i < maxn; ++i) {
        if (e[i]) {
            if (r[i]) t[i] = -1;
            cout << i << ' ' << t[i] << endl;
        }
    }
    return 0;
}
