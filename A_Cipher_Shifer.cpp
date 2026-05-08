#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans;
        for(int i=0;i<n;i++){
            char c=s[i];
            ans+=c;
            i++;
            while(i<n && s[i]!=c){
                i++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}