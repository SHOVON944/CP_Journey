#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,s;
    cin>>m>>s;

    if((s==0 && m>1) || s>9*m){
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }

    if(m==1 && s==0){
        cout<<0<<" "<<0<<endl;
        return 0;
    }

    string mx,mn;

    int sum=s;

    for(int i=0;i<m;i++){
        int d=min(9,sum);
        mx+=char(d+'0');
        sum-=d;
    }

    sum=s;

    for(int i=0;i<m;i++){
        for(int d=(i==0?1:0);d<=9;d++){
            int rem=sum-d;

            if(rem>=0 && rem<=9*(m-i-1)){
                mn+=char(d+'0');
                sum-=d;
                break;
            }
        }
    }

    cout<<mn<<" "<<mx<<endl;

    return 0;
}