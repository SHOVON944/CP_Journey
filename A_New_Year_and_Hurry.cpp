#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int t=240-k,ans=0,sum=0;
    for(int i=1;i<=n;i++){
        sum+=5*i;
        if(sum<=t)ans++;
        else break;
    }
    cout<<ans;

    return 0;
}