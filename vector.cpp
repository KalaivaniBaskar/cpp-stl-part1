#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "\n display veector :\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << "\n"
             << v[i] << " ";
    }
}

int main()
{

    vector<int> vec1;
    vec1.push_back(5);
    vec1.push_back(8);
    vector<string> studs({"fdjkfd", "gfdgd", "gdfd", "fsdfs"});
    display(vec1);
    display(studs);
    vector<string> vec3(studs); // 4-element string vector from vec2
    vector<int> vec4(6, 3);     // 6-element vector of 3s
    display(vec3);
    display(vec4);
    return 0;
}