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
{   char name[100] = "Somel Ahmed";
    //?Student somel(5, 'A', 11, name);
    //! if there is no constructor then write like this:
    //?Student* somel = new Student;
    //! if There is constructor then 
    Student* somel = new Student(5, 'A', 11, name);
    
    return 0;
}