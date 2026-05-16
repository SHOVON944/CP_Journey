#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){

        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        if(d < b){
            cout << -1 << endl;
        } else{

            long long diagonal = d - b;
            long long x = a + diagonal;

            if(x < c){
                cout << -1 << endl;
            } else{

                long long left = x - c;
                cout << diagonal + left << endl;
            }
        }
    }

    return 0;
}