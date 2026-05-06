#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;

        bool ok=false;

        if((2*b-c)%a==0){
            long long m=(2*b-c)/a;
            if(m>0)ok=true;
        }

        if((a+c)%(2*b)==0){
            long long m=(a+c)/(2*b);
            if(m>0)ok=true;
        }

        if((2*b-a)%c==0){
            long long m=(2*b-a)/c;
            if(m>0)ok=true;
        }

        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    
    return 0;
}