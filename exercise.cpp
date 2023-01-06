#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
class Person
{
public:
    int age;
    int name;
    Person operator+(Person & p) // NOTE 成员函数
    {
        Person temp;
        temp.age = this->age + p.age;
        temp.name = this->name + p.name;
        return temp;
    }
};
Person operator+(Person & p1, Person & p2)  // NOTE 全局函数
{
    Person temp;
    temp.age = p1.age + p2.age;
    return temp;
}
int main()
{
    Person p1;
    Person p2;
    p1.age = p2.age = 10;
    Person p3;
    p3 = p1 + p2;
    Person p4 = p1;
    cout << p3.age << endl;
    cout << (p1 + p2).age << endl;
    cout << p4.age << endl;
    
    system("pause");
    return 0;
}