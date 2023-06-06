#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>v = {1, 2, 2, 4, 3, 4,5};

    // for(int val: v) {
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    
    // //! Every 2 will be 100
    // replace(v.begin(), v.end(), 2, 100);
    // for(int val: v) {
    //     cout<<val<<" ";
    // }

    vector<int>v = {1, 2, 2, 4, 3, 4,5};
    auto it = find(v.begin(), v.end(), 10);
    if(it == v.end()) {
        cout<<"Not found!"<<endl;
    }
    else {
        cout<<"Found "<<endl;

    }
    return 0;
}