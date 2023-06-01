#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int maxnumber = 0;
    for(int i=0; i<n; i++) {
        if(arr[i]>maxnumber) {
            maxnumber = arr[i];
        }

    }
    cout<<maxnumber<<endl;
    return 0;
}