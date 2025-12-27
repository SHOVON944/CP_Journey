/*
███████╗██╗  ██╗ ██████╗ ██╗   ██╗ ██████╗ ███╗   ██╗
██╔════╝██║  ██║██╔═══██╗██║   ██║██╔═══██╗████╗  ██║
███████╗███████║██║   ██║██║   ██║██║   ██║██╔██╗ ██║
╚════██║██╔══██║██║   ██║╚██╗ ██╔╝██║   ██║██║╚██╗██║
███████║██║  ██║╚██████╔╝ ╚████╔╝ ╚██████╔╝██║ ╚████║
╚══════╝╚═╝  ╚═╝ ╚═════╝   ╚═══╝   ╚═════╝ ╚═╝  ╚═══╝
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> tower(n);
        for(int i=0; i<n; i++) cin>>tower[i];
        int current = tower[k-1];
        sort(tower.begin(), tower.end());
        int high_tower = *max_element(tower.begin(), tower.end());
        if(current==high_tower){
            cout<<"YES"<<endl;
        } else{
            int time = 0;
            bool check = true;
            for(int i=0; i<n; i++){
                if(tower[i]<=current) continue;
                int need = tower[i] - current;
                if(time+need>current){
                    check = false;
                    break;
                }
                time += need;
                current = tower[i];
                if(high_tower==current) break;
            }
            if(check) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}