#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long mn = a[0];
    long long mx = a[n - 1];

    long long diff = mx - mn;

    if(mn == mx){
        long long ways = 1LL * n * (n - 1) / 2;

        cout << diff << " " << ways << endl;
    } else{
        long long cnt_Min = 0;
        long long cnt_Max = 0;

        for(int i = 0; i < n; i++){
            if(a[i] == mn){
                cnt_Min++;
            }

            if(a[i] == mx){
                cnt_Max++;
            }
        }

        cout << diff << " " << cnt_Min * cnt_Max << endl;
    }

    return 0;
}