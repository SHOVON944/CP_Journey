#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int ans = 1;

        for(int i = 0; i < s.size() - 1; i++){
            if(s[i] == '1' && s[i + 1] == '0'){
                ans++;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}