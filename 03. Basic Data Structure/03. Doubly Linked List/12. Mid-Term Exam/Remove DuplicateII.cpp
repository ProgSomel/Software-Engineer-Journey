#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;
    int value;
     cin >> value;
    while (value != -1) {
        myList.push_back(value);
        cin >> value;
    }
    myList.sort();
    myList.unique();

    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}