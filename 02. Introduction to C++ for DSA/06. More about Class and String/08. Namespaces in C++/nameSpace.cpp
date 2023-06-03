#include<bits/stdc++.h>
using namespace std;
namespace Rakib {
   int age = 24;
   void hello() {
    cout<<"Hello from Rakib namespace!"<<endl;
   }
   

}
namespace Sakib {
   int age2 = 23;
   void hello2() {
    cout<<"Hello from Sakib namespace!"<<endl;
   }
   

}
using namespace Sakib;
int main()
{   string s("hello",2);
    cout<<s<<endl;
    cout<<age2<<endl;

    return 0;
}