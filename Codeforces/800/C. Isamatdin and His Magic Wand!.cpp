#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> num(n);
        bool even = false;
        bool odd = false;
        for(int i=0; i<n; i++){
            cin>>num[i];
            if(num[i]%2==0) even = true;
            else odd = true;
        }
        if(even  &&  odd){
            sort(num.begin(), num.end());
            for(int i : num){
                cout<<i<<" ";
            }
        } else{
            for(int i : num){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}