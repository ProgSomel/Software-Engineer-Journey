#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
        char name[100];
        int roll;
        int cls;
        char section;
        
        //! constructor 
        Student(int r, char s, int c, char* n) {
            cout<<"I called Automatically"<<endl;
            roll = r;
            section = s;
            cls = c;
            strcpy(name,n);
        }
};

int main()
{
    Student rahim(29, 'A', 7, "Rahim");
    cout<<rahim.roll<<endl;
    cout<<rahim.name<<endl;
    cout<<rahim.section<<endl;
    return 0;
}