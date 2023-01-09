#include <iostream>
#include <stdlib.h>
using namespace std;
class base1{
public:
   int m_A = 10;
protected:
    int m_B = 20;
private:
    int m_C = 30;
};
class son1: public base1{
public:
    void funcprbulic()
    {
        base1::m_A = 88;
        cout << m_A << endl;
    }
    void funcprotected()
    {
        m_B = 21;
        cout << m_B << endl;
    }
    void funcprivate()
    {
        // cout << m_C << endl;
    }
    // int m_B = 22;
};

int main()
{
    base1 b1;
    son1 son;
    cout << b1.m_A << endl;
    son.funcprbulic();
    son.funcprotected();
    cout << b1.m_A << endl;
    system("pause");
    return 0;
}