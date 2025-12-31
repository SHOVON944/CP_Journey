#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> num(n);
    for(int i=0; i<n; i++) cin>>num[i];
    int maxValueINdex = max_element(num.begin(), num.end()) - num.begin();
    int minValueIndex = min_element(num.begin(), num.end()) - num.begin();
    swap(num[maxValueINdex], num[minValueIndex]);
    for(int i : num){
        cout<<i<<" ";
    }

    return 0;
}