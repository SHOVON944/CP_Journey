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
        long long cntMin = 0;
        long long cntMax = 0;

        for(int i = 0; i < n; i++){
            if(a[i] == mn){
                cntMin++;
            }

            if(a[i] == mx){
                cntMax++;
            }
        }

        cout << diff << " " << cntMin * cntMax << endl;
    }

    return 0;
}