#include<bits/stdc++.h>
using namespace std;

int main()


{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int cur=1,ans=0;

        for(int i=0;i<4;i++){
            int x=s[i]-'0';
            if(x==0)x=10;

            ans+=abs(cur-x);
            ans+=1;

            cur=x;
        }

        cout<<ans<<endl;
    }

    
    return 0;
}