#include<bits/stdc++.h>
using namespace std;
class Person {
    public:
      string name;
      int age;

      Person(string name, int age) {
        this->name = name;
        this->age = age;
      }
};

int main()
{
    Person somel("Somel Ahmed", 23);
    cout<<somel.name<<endl;
    cout<<somel.age<<endl;
    return 0;
}