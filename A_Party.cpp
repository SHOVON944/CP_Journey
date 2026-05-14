#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>p(n+1);

    for(int i=1;i<=n;i++){
        cin>>p[i];
    }

    int ans=0;

    for(int i=1;i<=n;i++){
        int cnt=1;
        int x=i;

        while(p[x]!=-1){
            cnt++;
            x=p[x];
        }

        ans=max(ans,cnt);
    }

    cout<<ans<<endl;

    return 0;
}