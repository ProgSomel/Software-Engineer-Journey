#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin>>n>>q;
    vector<int>v(n);
    vector<int>pre(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    pre[0] =v[0];
    for(int i=1; i<n; i++) {
        pre[i] = pre[i-1]+v[i];
    }
    while(q--) {
        int l, r;
        cin>>l>>r;
        if(l==0) {
            cout<<pre[r]<<endl;

        }
        else {
            cout<<pre[r]-pre[l-1]<<endl;
        }
    }
    return 0;
}