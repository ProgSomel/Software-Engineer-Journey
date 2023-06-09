#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--) {
        int n;
        cin>>n;
        int a[n];
        bool flag = false;
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }
        for(int i=0; i<n; i++) {
            if(a[i]>a[i+1]) {
                flag = true;
                break;
            }
            
        }
         if(flag==true) {
                cout<<"YES"<<endl;

            }
            else {
                cout<<"NO"<<endl;
            }
    }
    return 0;
}