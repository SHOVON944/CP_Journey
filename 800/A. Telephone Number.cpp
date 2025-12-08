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
        if(n==11  && s[0]=='8'){
            cout<<"YES"<<endl;
        } else{
            if(n<=11){
                cout<<"NO"<<endl;
            } else{
                bool found = false;
                for(int i=0; i<=n-11; i++){
                    if(s[i]=='8'){
                        found = true;
                        break;
                    }
                }
                if(found) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }


    return 0;
}