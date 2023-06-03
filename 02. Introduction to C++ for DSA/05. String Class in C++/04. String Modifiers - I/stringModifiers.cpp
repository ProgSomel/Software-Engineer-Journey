#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Hello";
    string b = "World";
    // a = a+b;
    // a.append(b);

    // cout << a << endl;
    // cout << b << endl;

    //! To push at the end of the string

    // a = "HelloA";
    a.push_back('A');
    cout<<a <<endl;

    //! poping last element from the string

    a.pop_back();
    cout<<a <<endl;

    return 0;
}