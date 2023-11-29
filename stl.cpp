#include <iostream>
using namespace std;

int main()
{

    /*
   STL is a Standard Template Library
   consists of generic classes & functions
   - why STL? we can reuse well-tested components
   - very helpful in Competitive programming

        STL comprises of 3 main components:
        1. Containers - objects which store data - template classes

        2. Algorithm - procedures to process data - sorting, searching , using template functions

        3. Iterators -an Object which points to an element of a container, handled like a pointer.

        Iterator traverses across the container obj as instructed by the algo. Algo manipulates the container data with the help of iterators and perform operations on it using template functions

      Containers:
      using template classes
      store data

      types of containers:
      1. Sequence - Vector, List, Deque(double ended que)
      It sores data in linear manner, so operations maybe slower. can do random access w help of index, so access is faster

      2. Associative - Set, Multiset,  Map, Multimap( Map   = Dictionary ? )
      Direct access. so faster operations. Store in tree like structure. cannot do random access, so access is slower

     Set/Multiset : Unique values - stores sorted key, in which each key is unique and it can be inserted or deleted but cannot be altered.

     Map/Multimap: stores sorted key-value pair, in which each key is unique and it can be inserted or deleted but cannot be altered. Values associated with keys can be changed.

        What is the difference between sequence container and associative container?
        Sequence containers implement data structures that can be accessed sequentially. Associative containers implement sorted data structures that can be quickly searched (O(log n) complexity).


      3. Derived - Stack, Queue, Priority_Queue
      - based on real world modeling, gives some useful methods
      - derived from above two types
      - Stack, Queue, priority_queue

     */

    /*
    When to use which?

    Sequence:
    1. Vector :
    random access Fast, ( uses idx)
    ins/del - slower at mid
    ins at end - fast

    2. List:
    Random access - slow, have to traverse all pointer nodes
    ins at mid - fast, can simply add a new pointer node and change the adjacent pointing nodes
    ins at end - fast

 array/continuous memory structure :
 say an int[10],  0th idx mem is 'a', then 1st idx will be a+4byte, 2nd idx will a+8byte and so on..
 - to randomly access an idx, we just have the 0th idx address and do pinter arithmetic to find out el
- if i del the 3rd el, then the remaining 7 out of 10 following the 3rd el will have to shift 4byte so that the array memory remains continuuous, so all their addr will change.
- to del 1 el we have to make changes to all the el following it.

 VS

 list :

 - each el is a node wch has two part - 1 stores the val
 and other stores the addr of next el in list
- to access an el in 7th pos we have to start from the 1st node and travel linearly to the 7th
- we cannot access randomly, as lists are not stored continuously and we dont have the addr of 7th node
- ins and del can be easy, say if i want to del 5th node, all i have to do is make the addr part of 4th node point to addr of 6th node and make the 5th node wch i want to del, point to null

    Associative:
    all operations are fast except random access
    - because it uses tree like structure

    Drived Container:
    differs for each, depends on the DS it uses

    */
    return 0;
}