#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
class Person
{
public:
    int age;
    Person(int age)
    {
        this->age = age;
    }
    Person& pap(Person & p)
    {
        this->age += p.age;
        return * this;
    }
};


void test()
{
    Person p(10);
    Person p2(10);
    p2.pap(p).pap(p);
    cout << p.age << endl;
    cout << p2.age << endl;
}


int main()
{
    // test();
    int age;
    int * p = &age;
     
    cout << p << endl;
    cout << &(*p) << endl;
    system("pause");
    return 0;
}