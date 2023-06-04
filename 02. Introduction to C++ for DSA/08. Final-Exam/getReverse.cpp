#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
      string nm;
      int cls;
      char s;
      int math_marks;
      int eng_marks;
};

int main()
{
    
    int n;
    cin >> n;
    Student arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i].nm>>arr[i].cls>>arr[i].s>>arr[i].math_marks>>arr[i].eng_marks;
    }
    for(int i=n-1; i>=0; i--) {
        cout<<arr[i].nm<<" "<<arr[i].cls<<" "<<arr[i].s<<" "<<arr[i].math_marks<<" "<<arr[i].eng_marks<<endl;
    }
    
    return 0;
}