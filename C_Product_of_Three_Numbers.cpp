#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        long long a = 0, b = 0, c = 0;

        for(long long i = 2; i * i <= n; i++){
            if(n % i == 0){
                a = i;
                n /= i;
                break;
            }
        }

        for(long long i = 2; i * i <= n; i++){
            if(n % i == 0 && i != a){
                b = i;
                n /= i;
                break;
            }
        }

        c = n;

        if(a != 0 && b != 0 && c != a && c != b && c > 1){
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        } else{
            cout << "NO" << endl;
        }
    }

    return 0;
}