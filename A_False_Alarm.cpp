#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        vector<int>a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int l=-1,r=-1;

        for(int i=0;i<n;i++){
            if(a[i]==1){
                if(l==-1) l=i;
                r=i;
            }
        }

        if(r-l+1<=x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}