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
        vector<array<long long, 3>> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i][0]>>v[i][1]>>v[i][2];
        }
        sort(v.begin(), v.end(), [](auto &a, auto &b){  // lamda funciton
            return a[0]<b[0];
        });
        long long x = k;
        int i = 0;
        priority_queue<pair<long long, long long>> pq;
        while(1){
            bool entry = false;
            while(i<n  &&  v[i][0]<=x){
                pq.push( { v[i][2], v[i][1] } );    // 1st e real trpr ri...thle pq.top().first dia max access korbo
                i++;
                entry = true;
            }
            while(!pq.empty()  &&  pq.top().second<x){
                pq.pop();
            }
            if(pq.empty()) break;
            long long new_x = pq.top().first;
            pq.pop();
            if(new_x<x) break;
            x = new_x;
        }
        cout<<x<<endl;
    }

    return 0;
}