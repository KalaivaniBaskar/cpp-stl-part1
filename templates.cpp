#include <iostream>
using namespace std;

// #wkt, classes are templates for objects
// templates are what class made of - say class Vector
// template is a blueprint for class
// class are blueprint for objects/instances

// object makes reusability of class possible
// templates help create reusable classes

// a vector class can be of type int or float or double or  chararr etc
// but de we need to create a new class for each datatype ??
// DRY principle!!!

// a template is made in such a way, You make a template class once and then
// different classes can be created for different datatypes

// templates are parameterized classes, that takes in a parameter ( a datatype) and creates a new class based on that gn param

// syntax for making templates:
//  T denotes the datatype we pass - int / float/ char etc..

template <class T>
class Vector
{
    T *arr;

public:
    Vector(T *arr)
    {
        // initialize in constructor
    }

    // other class methods
};

int main()
{
    // this is how we use our tempplate
    //  Vector<int> myVec(ptr1);
    //  Vector<float> myVec(ptr2);
    return 0;
}