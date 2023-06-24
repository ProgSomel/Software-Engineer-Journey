
#include <bits/stdc++.h>
using namespace std;
int main()
{
   
    int n;
    cin>>n;
    int mid = n/2;
  
        for (int i = 1; i <= n; i++) {
  
        for (int j = 1; j <= n; j++) {

            
        
            if (j == i ) {
                if(mid+1 == (i+j)/2) {
                    cout<<"X";
                }
                else {
                     cout<<"\\";
                }
            }
              
            else if(j == (n + 1 - i))
                     cout << "/";
            
            else
                cout << " ";
        }
  
       
        cout << endl;
    }
    
    return 0;
}