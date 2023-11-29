#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    Complex c1;
    c1.setData(5, 86);
    c1.getData();
    cout << "---" << &c1 << endl;

    // precedence of . op is higher than * op
    // so in this case use () for the * part so that it has precedence
    Complex *c1ptr = &c1;
    (*c1ptr).setData(5, 86);
    (*c1ptr).getData();
    cout << "---" << c1ptr << endl;

    // instead of createing an obj and then creating a pointer var to its address
    // why not create an obj dynamically using new op , wkt new gives the address
    // new op creates an obj be it of built-in or user defined classes
    // new int(), new int[], new user-class

    Complex *ptr = new Complex;
    (*ptr).setData(1, 54); // is exactly same as
    (*ptr).getData();      // is as good as

    Complex *arw = new Complex;
    arw->setData(4, 25); // is exactly same as
    arw->getData();      // is as good as

    // ARROW OPERATOR:
    // directly dereference a pointer var w/o *
    // instead of dot op
    // (*c).fn is same as c->fn

    // Array of obj
    cout << "---" << endl;

    Complex *arrp = new Complex[4];
    arrp->setData(10, 100);
    arrp->getData();
    cout << "---" << arrp << endl;
    (arrp + 1)->setData(20, 200);
    (arrp + 1)->getData();
    cout << "---" << arrp + 1 << endl;
    (arrp + 2)->setData(30, 300);
    (arrp + 2)->getData();
    cout << "---" << arrp + 2 << endl;
    (arrp + 3)->setData(40, 400);
    (arrp + 3)->getData();
    cout << "---" << arrp + 3 << endl;

    //  The real part is 10
    // The imaginary part is 100
    // ---0xff1868
    // The real part is 20
    // The imaginary part is 200
    // ---0xff1870
    // The real part is 30
    // The imaginary part is 300
    // ---0xff1878
    // The real part is 40
    // The imaginary part is 400
    // ---0xff1880
    return 0;
}
