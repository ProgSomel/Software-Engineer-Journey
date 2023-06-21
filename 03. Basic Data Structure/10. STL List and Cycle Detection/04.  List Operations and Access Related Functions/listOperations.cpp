#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {20, 40, 40, 10, 50, 10, 10};
    for(int val: myList) {
        cout << val << " ";
    }
    cout<< endl;
    //? myList.remove(10);
    //?myList.sort();//Coto theke boro
    //? myList.sort(greater<int>());//Boro theke choto
    //? myList.unique();
    myList.reverse();

    for(int val: myList) {
        cout << val << " ";
    }

    return 0;
}