#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> mn1, mn2;

        for(int i = 0; i < n; i++){
            int m;
            cin >> m;

            vector<int> a(m);

            for(int j = 0; j < m; j++){
                cin >> a[j];
            }

            sort(a.begin(), a.end());

            mn1.push_back(a[0]);
            mn2.push_back(a[1]);
        }

        long long sum = 0;

        int mini = *min_element(mn1.begin(), mn1.end());

        for(int x : mn2){
            sum += x;
        }

        int removeMin = *min_element(mn2.begin(), mn2.end());

        cout << sum - removeMin + mini << endl;
    }

    return 0;
}