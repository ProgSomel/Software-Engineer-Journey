#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};

int main()
{
    Student rahim;
    rahim.roll = 29;
    rahim.cls = 9;
    rahim.section = 'A';
    char nm[100] = "Rahim";
    strcpy(rahim.name, nm);

    Student kahim;
    kahim.roll = 2;
    kahim.cls = 8;
    kahim.section = 'B';
    char nm2[100] = "kahim";
    strcpy(kahim.name, nm2);
    
    cout<<rahim.name<<endl;
    cout<<rahim.roll<<endl;
    
    return 0;
}