#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(i%2==0 && a[i]%2) x++;
            if(i%2==1 && a[i]%2==0) y++;
        }
        
        if(x!=y) cout<<-1<<endl;
        else cout<<x<<endl;
    }
    return 0;
}