#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x,p;
    cin>>x>>p;
    double Ans = (p*100)/(100-x);
    cout<<fixed<<setprecision(2)<<Ans;

    return 0;
}