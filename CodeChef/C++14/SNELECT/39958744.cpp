#include<bits/stdc++.h>

using namespace std;


int main() {
    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        int S = 0, M = 0;
        for (auto x: s) {
            if (x == 's')
                ++S;
            else
                ++M;
        }
        for (int i = 0; i < s.size() - 1; ++i) {
            if ((s[i] == 's' and s[i + 1] == 'm') or (s[i] == 'm' and s[i + 1] == 's')) {
                --S;
                ++i;
            }
        }
        cout << (S == M ? "tie" : S > M ? "snakes" : "mongooses") << '\n';
    }
}