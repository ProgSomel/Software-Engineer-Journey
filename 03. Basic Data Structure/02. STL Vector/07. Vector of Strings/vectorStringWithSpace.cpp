#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    vector<string>v;
    for(int i=0; i<n; i++) {
        string s;
        getline(cin, s);
        v.push_back(s);
    }
    for(string val:v) {
        cout<<val<<endl;
    }
    return 0;
}