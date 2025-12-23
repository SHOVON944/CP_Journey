#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        string upper, lower;
        cin >> upper >> lower;
        int row = 0;
        bool check = true;

        for (int i = 0; i < n; i++) {
            if (row == 0) {
                if (upper[i] == '1' || upper[i] == '2') row = 0;
                else if (lower[i] != '1' && lower[i] != '2') row = 1;
                else { check = false; break; }
            } 
            else {
                if (lower[i] == '1' || lower[i] == '2') row = 1;
                else if (upper[i] != '1' && upper[i] != '2') row = 0;
                else { check = false; break; }
            }
        }

        if (check && row == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
