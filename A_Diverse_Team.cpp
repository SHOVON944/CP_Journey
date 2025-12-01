#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin>>n>>a;
    vector<int> freq_Check(101, 0);
    vector<int> all(n);
    vector<int> store;
    for(int i=0; i<n; i++){
        cin>>all[i];
        freq_Check[all[i]]++;
        if(freq_Check[all[i]]==1)  store.push_back(i);
    }
    if(store.size()<a){
        cout<<"NO";
    } else{
        cout<<"YES"<<endl;
        for(int i=0; i<a; i++){
            cout<<store[i] + 1<<" ";
        }
    }

    return 0;
}