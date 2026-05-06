#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int q;
        cin>>q;

        map<int,int>cntL,cntR;

        while(q--){
            char c;
            int l,r;
            cin>>c>>l>>r;

            if(c=='+'){
                cntL[l]++;
                cntR[r]++;
            }else{
                cntL[l]--;
                if(cntL[l]==0)cntL.erase(l);

                cntR[r]--;
                if(cntR[r]==0)cntR.erase(r);
            }

            if(cntL.size()>=2){
                int maxL=cntL.rbegin()->first;
                int minR=cntR.begin()->first;

                if(maxL>minR)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }

    
    return 0;
}