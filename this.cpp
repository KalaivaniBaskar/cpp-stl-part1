#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void setData(int a)
    {
        // a = a;   # o/p will be The value of a is 4201019 - garbage
        // in a fn  local scope takes preceddence
        //  so the 'a' here is always the param and not the attibute

        //  “this” pointer points to the object which calls the member function.
        // it binds the object that invoked the fn call
        this->a = a; // o/p is The value of a is 4
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    A a;
    a.setData(4);
    a.getData();
    return 0;
}
