#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    // cout<<v.max_size()<<endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    
    // v.clear();
    v.resize(2);
    v.resize(10,100);
    cout<<v.size()<<endl;
     for(int i=0; i<v.size(); i++) {
         cout<<v[i]<<" ";
     }
    // //! But memory is not deleted internally
    // cout<<v[0]<<endl;




    return 0;
}