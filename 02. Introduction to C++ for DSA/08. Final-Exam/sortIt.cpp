#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
      string nm;
      int cls;
      char s;
      int id;
      int math_marks;
      int eng_marks;
      int totalMarks;
      
};

bool cmp(Student a, Student b) {
    if(a.totalMarks == b.totalMarks) {
      return a.id<b.id;
    }
    else {
        return a.totalMarks > b.totalMarks;
    }
}

int main()
{
    
    int n;
    cin >> n;
    Student arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i].nm>>arr[i].cls>>arr[i].s>>arr[i].id>>arr[i].math_marks>>arr[i].eng_marks;

        arr[i].totalMarks = arr[i].math_marks+arr[i].eng_marks;
    }
    

    sort(arr, arr+n, cmp);

    
     for(int i=0; i<n; i++) {
        cout<<arr[i].nm<<" "<<arr[i].cls<<" "<<arr[i].s<<" "<<arr[i].id<<" "<<arr[i].math_marks<<" "<<arr[i].eng_marks<<" "<<endl;
    }
    return 0;
}
