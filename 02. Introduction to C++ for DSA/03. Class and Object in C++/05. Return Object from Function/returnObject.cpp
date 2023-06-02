#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
       char name[100];
       int roll;
       int cls;
       char section;

       Student(char* n, int r, int c, char s) {
        strcpy(name, n);
        roll = r;
        cls = c;
        section = s;
       }

};

Student fun() {
    char name[100] = "Rahim  Ullah" ;
   Student rahim(name, 1, 12, 'A');
   return rahim;

}

int main() {

    Student rahim = fun();
    cout<<rahim.name<<endl;
    cout<<rahim.roll<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.cls<<endl;

    return 0;
}