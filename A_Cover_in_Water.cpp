#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        
        int cnt=0;
        bool ok=0;
        
        for(int i=0;i<n;i++){
            if(s[i]=='.')cnt++;
            if(i+2<n && s[i]=='.' && s[i+1]=='.' && s[i+2]=='.')ok=1;
        }
        
        if(ok)cout<<2<<endl;
        else cout<<cnt<<endl;
    }
    return 0;
}