#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1, 2, 3, 4, 5};
    // cout<<v[v.size()-1]<<" ";
    // cout<<v.front()<<" ";
    // cout<<v[0]<<" ";
    //? vector<int> :: iterator it;
    for(auto it=v.begin(); it<v.end(); it++) {
        cout<<*it<<" ";
    }



    return 0;
}