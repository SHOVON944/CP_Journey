#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        long long n, k, q;
        cin >> n >> k >> q;

        vector<long long> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long cnt = 0;
        long long ans = 0;

        for(int i = 0; i < n; i++){
            if(a[i] <= q){
                cnt++;
            } else{
                if(cnt >= k){
                    long long x = cnt - k + 1;
                    ans += (x * (x + 1)) / 2;
                }

                cnt = 0;
            }
        }

        if(cnt >= k){
            long long x = cnt - k + 1;
            ans += (x * (x + 1)) / 2;
        }

        cout << ans << endl;
    }

    return 0;
}