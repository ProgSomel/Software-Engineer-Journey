#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    
    string s;
    cin>>s;
    vector<int>freq(26, 0);
    for(char c : s) {
        int index = c-'a';
        freq[index]++;
    }
    for(int i=0; i<26; i++) {
        if(freq[i]>0) {
          char letter = i+'a';
          cout<<letter<<" "<<": "<<" "<<freq[i]<<endl;

        }
    }
    return 0;
}