#include <iostream>
#include <map>
using namespace std;

//  map stores data in key value pairs

void display(map<string, int> &score)
{
    // create an iterator obj
    map<string, int>::iterator itr;
    // itr obj will point to address of 1st  key val pair in the map
    cout << "\nDispalying Map key-value: \n";
    for (itr = score.begin(); itr != score.end(); itr++)
    {
        cout << (*itr).first << " : " << (*itr).second << endl;
    }
}

void displayRev(map<string, int> &score)
{
    // create an iterator obj
    map<string, int>::reverse_iterator itrev;
    // itrev obj will point to address of a key val pair in the map and iterates in reverse order

    cout << "\nDisplaying Map key-value in Reverse Order: \n";
    for (itrev = score.rbegin(); itrev != score.rend(); itrev++)
    {
        cout << (*itrev).first << " : " << (*itrev).second << endl;
    }
}

int main()
{
    map<string, int> scoreMap;
    scoreMap["Ananya"] = 89;
    scoreMap["Devi"] = 79;
    display(scoreMap);
    scoreMap.insert({{"Leela", 84}, {"Manju", 92}});
    display(scoreMap);
    displayRev(scoreMap);
    cout << "Map size : " << scoreMap.size() << endl;
    cout << "is score map empty: " << scoreMap.empty() << endl;

    map<string, int> ageMap;
    cout << "Map size : " << ageMap.size() << endl;
    cout << "is age map empty: " << ageMap.empty() << endl;
    return 0;
}