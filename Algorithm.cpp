#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // Binary Search
    cout << "Finding 5 -> " << binary_search(v.begin(), v.end(), 5) << endl;

    cout << "Lower Bound -> " << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;

    cout << "Upper Bound -> " << upper_bound(v.begin(), v.end(), 2) - v.begin() << endl;

    // Finding max

    int a = 6;
    int b = 10;

    cout << "Max -> " << max(a, b) << endl;
    cout << "Min -> " << min(a, b) << endl;

    // Swap Function
    swap(a, b);

    // Reverse Function
    string abcd = "abcd";

    reverse(abcd.begin(), abcd.end());

    cout << "string reverse -> " << abcd << endl;

    // Rotate Function

    //## Parameter of rotate
    // first: A forward iterator pointing the position of the first element in the range to be rotated.

    // middle: A forward iterator addressing to the element within the range [first, last) that is moved to the first position in the range.

    // last: A forward iterator pointing the position one past the final element in the range in which the elements are being reversed.

    cout << "Before rotate -> " << endl;

    for (int i : v)
    {
        cout << i << " ";
    }

    rotate(v.begin(), v.end() - 2, v.end());

    cout << "\nAfter rotate -> " << endl;

    for (int i : v)
    {
        cout << i << " ";
    }

    // Sort Function
    // Based on Intro Sort Quick sort , Heap Sort , Insertion Sort
    sort(v.begin(), v.end());

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}
