#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int tot=0;
        for(int i=0;i<n;i++){
            if(a[i]==2)tot++;
        }

        if(tot%2){
            cout<<-1<<endl;
            continue;
        }

        int need=tot/2,cur=0;

        for(int i=0;i<n;i++){
            if(a[i]==2)cur++;
            if(cur==need){
                cout<<i+1<<endl;
                break;
            }
        }
    }

    
    return 0;
}