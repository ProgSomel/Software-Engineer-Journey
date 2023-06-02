#include<bits/stdc++.h>
using namespace std;
class Person {
    public:
      char name[100];
      float height;
      int age;

      Person(char* n, float h, int a) {
        strcpy(name, n);
        height = h;
        age = a;
      };
};

int main()
{   char name[100] = "Somel Ahmed"; 
char name2[100] = "Ridoy Hasan";

    Person* somel = new Person(name, 5.11, 23);
    Person* ridoy = new Person(name2, 5, 18);

    if(somel->age > ridoy->age) {
        cout<<somel->name<<endl;
    }
    else {
        cout<<ridoy->name<<endl;
    }

    return 0;
}