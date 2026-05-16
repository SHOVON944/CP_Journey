#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int ans = 0;
        bool ok = true;
        for(int i = n - 2; i >= 0; i--){
            while(a[i] >= a[i + 1]){
                a[i] /= 2;
                ans++;
                if(a[i] == 0 && a[i] >= a[i + 1]){
                    ok = false;
                    break;
                }
            }
            if(!ok){
                break;
            }
        }

        if(ok){
            cout << ans << endl;
        } else{
            cout << -1 << endl;
        }
    }

    return 0;
}