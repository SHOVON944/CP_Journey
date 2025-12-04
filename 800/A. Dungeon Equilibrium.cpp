#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> freq(n+1, 0);
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            freq[a]++;
        }
        int ans = 0;

        for(int i=0; i<=n; i++){
            if(freq[i]==0) continue;

            if(freq[i]>=i) ans = ans + freq[i] - i;
            else ans = ans + freq[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}