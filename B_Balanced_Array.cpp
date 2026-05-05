#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%4){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        int k = n / 2;
        
        for(int i=1;i<=k;i++)cout<<2*i<<" ";
        
        int sum=0;
        for(int i=1;i<k;i++){
            cout<<2*i-1<<" ";
            sum+=2*i-1;
        }
        
        int total=k*(k+1);
        cout<<total-sum<<endl;
    }
}