#include <iostream>
#include <list>
using namespace std;

//  List here is bidirectional
// std::list is a container that supports constant time insertion and removal of elements from anywhere in the container. Fast random access is not supported. It is usually implemented as a doubly-linked list.
void display(list<int> &myList)
{
    // create an iterator obj
    list<int>::iterator itr;
    // itr obj will point to address of 1st  key val pair in the map
    cout << "\nDisplaying list: \n";
    for (itr = myList.begin(); itr != myList.end(); itr++)
    {
        cout << (*itr) << "\t";
    }
}

void displayRev(list<int> &myList)
{
    // create an iterator obj
    list<int>::reverse_iterator itrev;
    // itrev obj will point to address of 1st  key val pair in the map
    cout << "\nDisplaying list in reverse: \n";
    for (itrev = myList.rbegin(); itrev != myList.rend(); itrev++)
    {
        cout << (*itrev) << "\t";
    }
}

int main()
{

    list<int> list1; // len 0
    list1.push_back(10);
    list1.push_back(20);
    list1.push_back(30);
    list1.push_back(40);
    list1.push_back(50);
    list1.pop_back();
    list1.push_front(-11);
    list1.push_front(-11);
    display(list1);
    list1.remove(-11); // removes all occurences of a val
    display(list1);
    displayRev(list1);

    list<int> list2{1, 2, 3, 4, 5};
    display(list2);
    list2.insert(list2.end(), {6, 7, 8});
    // insert(position to insert at, data to insert)
    display(list2);
    cout << "\n1st el in list " << list2.front() << endl;
    cout << "end el in list " << list2.back() << endl;
    // other list methods are - sort(), merge(), reverse()
    return 0;
}