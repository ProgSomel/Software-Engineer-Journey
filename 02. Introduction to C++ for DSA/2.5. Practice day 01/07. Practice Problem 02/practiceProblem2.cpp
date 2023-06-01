#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n;
    int *A = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cin>>m;
    int B[m];
    for(int i = 0; i < n; i++) {
        B[i] = A[i];
    }
    for(int i = n; i < m; i++) {
       cin >> B[i];
    }
    
    delete[] A;

    for(int i = 0; i < m; i++) {
        cout<<B[i]<<" ";
    }


    return 0;
}