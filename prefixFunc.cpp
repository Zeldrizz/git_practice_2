#include <bits/stdc++.h>
using namespace std;

#define nl cout << "\n";

vector<int> prefixFunc(string& s) {
    int n = s.length();
    vector<int> p(n, 0);

    for(int i = 1; i < n; i++) {
        int cur = p[i - 1];

        while(s[i] != s[cur] && cur > 0) {
            cur = p[cur - 1];
        }

        if(s[i] == s[cur]) {
            p[i] = cur + 1;
        }
    }

    return p;
}



int main() {

    string pattern;
    cin >> pattern;

    string stroke;
    cin >> stroke;

    string t = pattern + '#' + stroke;

    vector<int> sample1 = prefixFunc(t);

    for(int i = 0; i < sample1.size(); i++) {
        cout << sample1[i] << " ";
    }

    nl;

    return 0;
}