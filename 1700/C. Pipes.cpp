#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string upper_pipes, lower_pepes;
        cin>>upper_pipes>>lower_pepes;
        int row = 0;
        bool check = true;
        for(int i=0; i<n; i++){
            if(row == 0){
                if(upper_pipes[i]=='1'  ||  upper_pipes[i]=='2'){
                    row = 0;
                } else{
                    if(lower_pepes[i]!='1'  &&  lower_pepes[i]!='2'){
                        row = 1;
                    }
                    else{
                        check = false;
                        break;
                    }
                }
            } else{
                if(lower_pepes[i]=='1'  ||  lower_pepes[i]=='2'){
                    row = 1;
                } else{
                    if(upper_pipes[i]!='1'  &&  upper_pipes[i]!='2'){
                        row = 0;
                    } else{
                        check = false;
                        break;
                    }
                }
            }
        }
        if(check){
            if(row==1){
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