#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    map<char,bitset<13>> bs;
    map<char,int> n;
    for (int i = 0; i < s.size(); i += 3) {
        int x = (s[i] - '0') * 10 + s[i + 1] - '0';
        int np = s[i + 2];
        bs[np][x - 1] = true;
        ++n[np];
    }
    for (auto b : {'C','E','U','P'}) {
        int x = bs[b].count();
        if (n[b] != x) {
            cout << "erro\n";
        } else {
            cout << 13 - x << endl;
        }
    }
    return 0;
}
