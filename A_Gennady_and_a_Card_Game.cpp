#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<string> a(5);

    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }

    for(int i = 0; i < 5; i++){
        if(a[i][0] == s[0] || a[i][1] == s[1]){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}