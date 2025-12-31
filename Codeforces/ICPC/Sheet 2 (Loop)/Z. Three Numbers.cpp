#include<bits/stdc++.h>
using namespace std;



int main()
{
    long long k, s;
    cin>>k>>s;
    long long count=0;
    for(int i=0; i<=k; i++){
        for(int j=0; j<=k; j++){
            int m = s - i - j;
                if(0<=m   &&   m<=k) count++;
        }
    }
    cout<<count<<endl;

    return 0;
}