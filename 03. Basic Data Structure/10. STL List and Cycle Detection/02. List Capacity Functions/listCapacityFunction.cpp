#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist={10, 20, 30};
    cout<<mylist.max_size()<<endl;
    // mylist.clear();
    mylist.resize(2);
    mylist.resize(5, 100);
    cout<<mylist.max_size()<<endl;

    for(int val:mylist) {
        cout<<val<<" ";
    }
    return 0;
}