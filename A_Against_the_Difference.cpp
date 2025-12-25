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
        int neat = 0;
        for(int i=1; i<=n; i++) {
            int x;
            cin>>x;
            freq[x]++;
            if(freq[x] == x){
                neat += x;
                freq[x] = 0;
            }
        }
        cout<<neat<<endl;
    }

    return 0;
}