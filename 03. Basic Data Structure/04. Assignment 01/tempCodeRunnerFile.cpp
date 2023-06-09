
#include <bits/stdc++.h>
using namespace std;
  


int main()
{
   
    int n;
    cin>>n;
  
        for (int i = 1; i <= n; i++) {
  
        for (int j = 1; j <= n; j++) {
        
            if (j == i )
                cout << "\\";
            else if(j == (n + 1 - i))
                     cout << "/";
            else if(j == i  && j+i-1 == n+1)
                    cout<<"XX";
            
            else
                cout << " ";
        }
  
       
        cout << endl;
    }
    
    return 0;
}