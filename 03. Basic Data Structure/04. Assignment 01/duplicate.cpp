#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int v[n];
    bool hasDuplicate = false;
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    for(int i=0; i<n; i++) {
        int c = count(v, v+n, v[i]);
        if(c>1) {
            hasDuplicate = true;
            break;
        }
    }
    if(hasDuplicate==false) {
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }

    
    return 0;
}