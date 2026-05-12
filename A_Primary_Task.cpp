#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        if(s.size() >= 3   &&   s[0] == '1'   &&   s[1] == '0'){
            string x = s.substr(2);

            if(x[0] != '0'   &&   stoi(x) >= 2){
                cout<<"YES"<<endl;
            } else{
                cout<<"NO"<<endl;
            }
        } else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}