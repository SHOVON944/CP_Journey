#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> b(n);
        for(int i = 0; i < n; i++){
            cin>>b[i];
        }
        int l = 0, r = n - 1;
        while(l <= r){
            cout<<b[l]<<" ";
            if(l != r){
                cout<<b[r]<<" ";
            }
            l++;
            r--;
        }
        cout<<endl;
    }

    return 0;
}