#include<bits/stdc++.h>
using namespace std;
int main()
{
    //  list<int> mylist;
    // list<int> mylist(10, 5);
    //! copying One list to another list
    // list<int>list2 = {10, 20, 30, 40, 50};
    // list<int>mylist = list2;

    //! Array Values copying to List 
    // int arr[5]={10, 20, 30, 40, 50};
    // list<int>mylist(arr, arr+5);

    //! vector values copying to list
    vector<int>v = {10, 20, 30, 40, 50};
    list<int>mylist(v.begin(), v.end());
    // for(auto it = mylist.begin(); it != mylist.end(); it++) {
    //     cout<<*it<<" ";

    // }
    //? we can also use range based loop for printing List
    for(int val:mylist) {
        cout<<val<<" ";
    }
    return 0;
}