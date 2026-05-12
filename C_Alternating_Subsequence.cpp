#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long> a(n);

        for(int i = 0; i < n; i++){
            cin>>a[i];
        }

        long long ans = a[0];

        for(int i = 1; i < n; i++){
            if((a[i] > 0 && a[i - 1] > 0) || (a[i] < 0 && a[i - 1] < 0)){
                ans += max(a[i], a[i - 1]) - a[i - 1];
            } else {
                ans += a[i];
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}