#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();

        bool valid = false;
        for(int i=0; i<n-1; i++){   // ** er jnno
            if(s[i]=='*'  &&  s[i+1]=='*'){
                cout<<-1<<endl;
                valid = true;
                break;
            }
        }
        if(!valid){
            for(int i=0; i<n-1; i++){   // >< er jnno
                if(s[i]=='>'  &&  s[i+1]=='<'){
                    cout<<-1<<endl;
                    valid = true;
                    break;
                }
            }
        }
        if(!valid){
            for(int i=1; i<n-1; i++){   // >*< er jnno
                if(s[i]=='*'  &&  s[i-1]=='>'  &&  s[i+1]=='<'){
                    cout<<-1<<endl;
                    valid = true;
                    break;
                }
            }
        }
        if(!valid){
            int max_step = count(s.begin(), s.end(), '*');  // finite case er jnno
            cout<< (n + max_step - 1)<<endl;
        }
    }

    return 0;
}