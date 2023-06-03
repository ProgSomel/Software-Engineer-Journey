#include<bits/stdc++.h>
using namespace std;
class Person {
    public:
      string name;
      int age;
      int marks1;
      int marks2;

      Person(string nm, int ag, int m1, int m2) {
          name = nm;
          age = ag;
          marks1 = m1;
          marks2 = m2;
      }
      void hello() {
        cout<<name<<endl;
        cout<<age<<endl;
      }
      int totalMarks() {
        return marks1 + marks2;
      }


};

int main()
{
    Person somel("Somel Ahmed", 23, 95, 85);
    somel.hello();
    cout<<somel.totalMarks() << endl;
    return 0;
}