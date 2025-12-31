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
        for(int i=0; i<n; i++) cin>>num[i];
        int min_value = INT_MAX;
        for(int i=0; i<n-1; i++){
            for(int j= i+1; j<n; j++){
                int val = num[i] + num[j] + j - i;
                min_value = min(min_value, val);
            }
        }
        cout<<min_value<<endl;
    }

    return 0;
}