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
            if(s[i]=='*'  &&  s[i+1]=='<'){
                cout<<-1<<endl;
                valid = true;
                break;
            }
        }
        if(!valid){
            for(int i=0; i<n-1; i++){   // ** er jnno
                if(s[i]=='>'  &&  s[i+1]=='*'){
                    cout<<-1<<endl;
                    valid = true;
                    break;
                }
            }
        }
        if(!valid){
            for(int i=0; i<n-1; i++){   // ** er jnno
                if(s[i]=='*'  &&  s[i+1]=='*'){
                    cout<<-1<<endl;
                    valid = true;
                    break;
                }
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
            int ans = 0;
            for(int i=0; i<n; i++){
                if(s[i]=='<'  ||  s[i]=='*'){
                    ans = i + 1;
                } else{
                    break;
                }
            }
            for(int i=n-1; i>=0; i--){
                if(s[i]=='>'  ||  s[i]=='*'){
                    ans = max(ans, (n-i));
                } else{
                    break;
                }
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}