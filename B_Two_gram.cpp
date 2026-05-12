#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    map<string, int> mp;

    for(int i = 0; i < n - 1; i++){
        string x = "";
        x += s[i];
        x += s[i + 1];
        mp[x]++;
    }

    int mx = 0;
    string ans;

    for(auto it : mp){
        if(it.second > mx){
            mx = it.second;
            ans = it.first;
        }
    }

    cout<<ans<<endl;

    return 0;
}