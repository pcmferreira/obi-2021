#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << max({ min(a, b), min(a, c), min(b, c) }) << endl;
    return 0;
}
