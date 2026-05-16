#include<bits/stdc++.h>
using namespace std;

bool possible(vector<long long>& a, long long h, long long x)
{
    long long water = 0;

    for(int i = 0; i < a.size(); i++){
        if(a[i] < h){
            water += (h - a[i]);
        }

        if(water > x){
            return false;
        }
    }

    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        long long x;
        cin>>n>>x;

        vector<long long> a(n);

        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        long long l = 1;
        long long r = 2e9;
        long long ans = 1;

        while(l <= r){
            long long mid = l + (r - l) / 2;

            if(possible(a,mid,x)){
                ans = mid;
                l = mid + 1;
            } else{
                r = mid - 1;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}