#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        map<char,int> mp;

        for(char c : s){
            mp[c]++;
        }

        int ans = 0;

        for(char ch = 'A'; ch <= 'G'; ch++){
            if(mp[ch] < m){
                ans += (m - mp[ch]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}