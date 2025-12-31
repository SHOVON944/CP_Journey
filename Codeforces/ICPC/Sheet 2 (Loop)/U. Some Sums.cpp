#include<bits/stdc++.h>
using namespace std;


int isBetweenDigit(int x){
    int between = 0;
    while(x>0){
        between += x%10;
        x /= 10;
    }
    return between;
}

int main()
{
    int n, a, b;
    cin>>n>>a>>b;
    long long sum = 0;
    for(int i=1; i<=n; i++){
        if(a<=isBetweenDigit(i)   &&   isBetweenDigit(i)<=b) sum += i;
    }
    cout<<sum;

    return 0;
}