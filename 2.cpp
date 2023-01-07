#include <iostream>
#include <stdlib.h>
using namespace std;
class dizen
{
    friend ostream& operator<<(ostream &out, dizen p);
public:
    dizen& operator++()
    {
        ++m_A;
        return *this;
    }    
    dizen operator++(int)
    {
        dizen temp;
        temp = *this;
        m_A++;
        cout << temp.m << endl;
        delete temp.m;
        cout << this->m << endl;
        // delete this->m;
        return temp;
    }
    dizen& operator=(dizen &p)
    {
        if(this->m != NULL){
            delete m;
            m = NULL;
        }
        m = new int(* p.m);
        return *this;
    }
public:
    int m_A = 1;
    int * m = new int;
};
ostream& operator<<(ostream &out, dizen p)
{
    out << p.m_A << endl;
    return out;
}
void test()
{
    dizen t;
    // delete t.m;
    cout << t++ << endl;
    delete t.m;
    cout << t << endl;
    cout << t.m << endl;
    // delete t.m;
}

int main()
{
    test();
    system("pause");
    return 0;
}