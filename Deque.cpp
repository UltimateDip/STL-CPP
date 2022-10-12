#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;

    d.push_back(9);  // Insert at end
    d.push_front(2); // Insert at front

    // for (int i : d)
    // {
    //     cout << i << " ";
    // }

    // pop from back
    // d.pop_back();
    // pop from front
    // d.pop_front();

    cout << "Element at index 1 - " << d.at(1) << endl;

    cout << "front - " << d.front() << endl;

    cout << "back - " << d.back() << endl;

    cout << "Empty or not : " << d.empty() << endl;

    cout << "\nSize before Erase - " << d.size();
    d.erase(d.begin(), d.begin() + 1); // Size becomes zero , Capacity remains same
    cout << "\nSize after Erase - " << d.size();

    return 0;
}

// This is Deque
// This is file for Deque
// This is one of the method to pop 
// Made By Chetan Lohkare

// This is Deque
// This is file for Deque
// This is one of the method to pop 
// Made By Chetan Lohkare

// This is Deque
// This is file for Deque
// This is one of the method to pop 
// Made By Chetan Lohkare

// This is Deque
// This is file for Deque
// This is one of the method to pop 
// Made By Chetan Lohkare
