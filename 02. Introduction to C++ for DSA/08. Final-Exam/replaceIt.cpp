#include<bits/stdc++.h>
using namespace std;

string replace(string s, string x) {
    int pos = 0;
    while ((pos = s.find(x, pos)) != string::npos) {
        s.replace(pos, x.size(), "$");
        pos += 1; 
    }

    return s;
}
int main()
{
   int t;
   cin>>t;
   for(int i=0; i<t; i++) {
    string s, x;
    cin>>s>>x;
    string output= replace(s, x);
    cout<<output<<endl;

   }


    return 0;
}
