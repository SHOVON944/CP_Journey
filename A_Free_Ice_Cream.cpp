#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long x;
    cin >> n >> x;

    long long distress = 0;

    while(n--){

        char ch;
        long long d;

        cin >> ch >> d;

        if(ch == '+'){
            x += d;
        } else{
            if(x >= d){
                x -= d;
            } else{
                distress++;
            }
        }
    }

    cout << x << " " << distress << endl;

    return 0;
}