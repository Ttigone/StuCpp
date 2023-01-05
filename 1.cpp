#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
class Person;
class collect
{
public:
    collect();
    void display1();
    void display2();
    Person * da;
};
class Person
{
    friend void collect::display2(); 
public:
    Person();
    int age;
private:
    string gender;
};

Person::Person()
{
    gender = "ÄÐ";
    age = 19;
}
collect::collect()
{
    da = new Person;
}
void collect::display1()
{
    cout << da->age << endl;
}
void collect::display2()
{
    cout << da->age << endl;
    cout << da->gender << endl;
}
void test()
{
    collect data;
    data.display1();
    data.display2();
}
int main()
{
    test();
    system("pause");
    return 0;
}