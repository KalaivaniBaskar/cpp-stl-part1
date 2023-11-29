#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is " << *(ptr) << endl;
    cout << "The addr of a is " << (ptr) << endl;
    //  The value of a is 4
    // The addr of a is 0x61ff0c

    // using new operator, dynamically create an integer
    int *p = new int(40); // () for value [] for array
    cout << "The value of integer is " << *(p) << endl;
    cout << "The addr of integer is " << (p) << endl;
    *p = 45;
    cout << "The value of integer is " << *(p) << endl;
    // The value of integer is 40
    // The addr of integer is 0xf61848
    // The value of integer is 45

    // the new keyword returns the addr
    cout << "The addr of float val is " << new float(9.8) << endl;
    // The addr of float val is 0x8c1858

    int *arr = new int[3]; // [] denotes array, 3 denotes size of array
    arr[0] = 10;
    arr[1] = 20;
    *(arr + 2) = 30;

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << *(arr + 2) << endl;

    // DELETE operator:
    // delete *ptr;
    delete arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    // The value of arr[0] is 16717656
    // The value of arr[1] is 16711872
    // The value of arr[2] is 30

    delete[] arr; // frees the entire block of memory
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    cout << *p << "\t" << *ptr << endl;
    // 45      4
    delete p, ptr; // works only for dynamically allocated values

    cout << p << "\t" << ptr << endl;
    cout << *p << "\t" << *ptr << endl;
    // 0x8d1848        0x61ff08
    // 9246824 4
    return 0;
}