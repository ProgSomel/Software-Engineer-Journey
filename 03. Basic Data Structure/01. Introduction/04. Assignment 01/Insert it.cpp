#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>x(n);
    for(int i=0; i<n; i++) {
        cin >> x[i];
    }
    int m;
    cin>>m;
    vector<int>y(m);
    for(int i=0; i<m; i++) {
        cin>>y[i];
    }
    int k ;
    cin>>k;
    x.insert(x.begin()+k, y.begin(), y.end()); 
    
    
    for(int val: x) {
        cout<<val<<" ";
    }
    return 0; 
}