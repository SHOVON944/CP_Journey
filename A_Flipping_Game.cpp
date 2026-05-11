#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    int one = 0;

    for(int i = 0; i < n; i++){
        cin>>a[i];

        if(a[i] == 1){
            one++;
        }
    }

    int ans = 0;

    for(int i = 0; i < n; i++){
        int zero = 0, onee = 0;

        for(int j = i; j < n; j++){
            if(a[j] == 0){
                zero++;
            } else{
                onee++;
            }

            ans = max(ans, one + zero - onee);
        }
    }

    cout<<ans<<endl;

    return 0;
}