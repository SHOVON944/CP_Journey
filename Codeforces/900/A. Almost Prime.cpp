#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count = 0;
    for(int i=2; i<=n; i++){
        int temp = i;
        int count_i = 0;
        for(int j=2; j*j<=temp; j++){
            if(temp%j==0){
                count_i++;
                while(temp%j==0){
                    temp /= j;
                }
            }
        }
        if(temp>1) count_i++;
        if(count_i==2) count++;
    }
    cout<<count;

    return 0;
}