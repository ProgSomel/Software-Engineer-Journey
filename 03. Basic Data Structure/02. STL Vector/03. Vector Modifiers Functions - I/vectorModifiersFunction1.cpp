#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>x={10, 20, 30};
    x.pop_back();
    for(int i=0; i<x.size(); i++) {
        cout<<x[i]<<endl;
    }
    // vector<int>v={1, 2, 3};
    // //! v = or v.assign() 
    // v=x;
    // for(int i=0;i<v.size();i++) {
    //     cout<<v[i]<<endl;
    // }

    return 0;
}