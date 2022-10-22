#include <iostream>
#include <queue>
using namespace std;
int main()
{
    //# Priority Queue is queue whoes first element will be greatest
    //# Related to heap (max heap and min heap)
    //# Default prioruty queue is max heap

    // max heap
    priority_queue<int> maxHeap;

    maxHeap.push(5);
    maxHeap.push(1);
    maxHeap.push(8);
    maxHeap.push(0);
    maxHeap.push(3);

    cout << "Size of Max Head before popping -> " << maxHeap.size() << endl;

    int max = maxHeap.size();

    for (int i = 0; i < max; i++)
    {
        cout << maxHeap.top() << endl;
        maxHeap.pop();
    }

    cout << "Size of Max Head after popping -> " << maxHeap.size() << endl;

    // min heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(5);
    minHeap.push(1);
    minHeap.push(8);
    minHeap.push(0);
    minHeap.push(3);

    cout << "Size of Min Heap -> " << minHeap.size() << endl;

    int min = minHeap.size();

    for (int i = 0; i < min; i++)
    {
        cout << minHeap.top() << endl;
        minHeap.pop();
    }

    // After poppping all the elements from min and max heap
    cout << "Is max heap empty : " << maxHeap.empty() << endl;
    cout << "Is min heap empty : " << minHeap.empty() << endl;

    return 0;
}
