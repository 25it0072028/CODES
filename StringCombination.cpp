#include<iostream>
using namespace std;

#define ll unsigned long long int

void solve() {
    string s;
    cin >> s;

    int L = s.length();

    for (int ctr = 1; ctr < (1 << L); ctr++) {
        string combi = "";
        for (int sh = 0; sh < L; sh++) {
            if ((ctr & (1 << sh)) > 0) {
                // it is a set bit
                combi += s[sh];
            }
        }
        cout << combi << endl;
    }
}

int main() {
    solve();
    return 0;
}
