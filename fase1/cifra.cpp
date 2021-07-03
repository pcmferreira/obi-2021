#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    string a = ".aae.eei.iiioo.ooouu.u*u*u";
    string b = ".cdf.ghj.klmnp.qrstv.x*z*z";

    string r;
    for (char c : s) {
        r.push_back(c);

        int n = c - 'a';
        if (a[n] != '.') {
            r += { a[n], b[n] };
        }
    }
    cout << r << endl;
    return 0;
}
