#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 50};
    for(int val: myList) {
        cout<<val<<" ";
    }
    cout<<endl;
    //?cout<<myList.front();
    //?cout<<myList.back();
    cout<<*next(myList.begin(), 3)<<endl;//It gives a Iterator that's why it should be pointer 
    

    return 0;
}