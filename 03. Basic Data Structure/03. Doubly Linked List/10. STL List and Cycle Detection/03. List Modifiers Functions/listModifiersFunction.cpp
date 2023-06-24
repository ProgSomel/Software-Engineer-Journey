#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 30, 50, 60};
    list<int> newList={100, 200, 300};
    vector<int>v={60, 70, 80};

    //? newList = myList;
    //? myList.push_back(100);
    //? myList.push_front(100);
    //? myList.pop_back();
    //? myList.insert(next(myList.begin(), 2), 100);
    //? myList.erase(next(myList.begin(), 2));
    //? myList.insert(next(myList.begin(),3), newList.begin(), newList.end());
    //? myList.insert(next(myList.begin(),3), v.begin(), v.end());
    for(int val:myList) {
       cout<<val<<" ";
    }
    cout<<endl;
    //? myList.erase(next(myList.begin(),2), next(myList.begin(),5));
    //? replace(myList.begin(),myList.end(), 30, 100);

    auto it = find(myList.begin(), myList.end(), 30);
    cout<<*it<<endl;
    if(it==myList.end()) {
        cout<<*it<<" "<<"value not found"<<endl;
    }
    else {
        cout<<*it<<" "<<"value found"<<endl;
    }

    // for(int val:myList) {
    //    cout<<val<<" ";
    // }
    return 0;
}