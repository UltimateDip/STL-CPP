#include <iostream>
#include <list>
using namespace std;
int main()
{
    // List Implementation is done using doubly linked list
    // Direct access not possible like array and vector i.e. Array[3] not possible

    list<int> l;
    // copy list
    list<int> n(l);

    // List with 5 elements initialize with 100
    list<int> newlist(5, 100);

    l.push_back(1);
    l.push_front(2);

//     for (int i : newlist)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     l.erase(l.begin());

//     cout << "Size of list -> " << l.size() << endl;
for (int i : newlist)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());

    cout << "Size of list -> " << l.size() << endl;

    return 0;
}
