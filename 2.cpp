#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
class Person
{
    friend ostream& operator<<(ostream &cout, Person &p);
private:
    int m_A = 20;
    int m_B = 10;
};
ostream& operator<<(ostream &cout, Person &p)
{
    cout << "m_A = "  << p.m_A << " m_B = " << p.m_B << endl;
    return cout;
}
void test()
{
    Person p;
    cout << p << endl;
}


int main()
{
    test();
    system("pause");
    return 0;
}