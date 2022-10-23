#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

void findAllSubarraySum(vector<int> v);

int main()
{
    // bitset is a class template that represents a fixed-size bitset of bits
    // bitset is a container that stores bits and provides bit manipulation operations

    // declaration
    bitset<8> b8;   // 8 bits
    bitset<16> b16; // 16 bits

    // you can have the binary form of a number directly in bitset
    bitset<32> bt(52);  // 32 bits because 32 is the size of an int
    cout << bt << endl; // 00000000000000000000000000110100 === 52 in decimal

    // you can also have the binary form of a number in string form
    bitset<32> bt2("10101010101010101010101010101010");
    // and print the decimal number from binary
    cout << bt2.to_ulong() << endl; // 2863311530  // ulong == unsigned long, ullong == unsigned long long

    // Bitset can have a size of at max 10^7 bits
    bitset<10000000> bt3; // 10^7 bits
    // bitset<10000001> bt4; // error: size of bitset too large

    // some operations
    bitset<8> bt5(5);    // 00000101
    bt5.flip();          // 11111010
    cout << bt5 << endl; // flip all bits

    bt5.set();    // 11111111 , set all bits
    bt5.reset();  // 00000000 , reset all bits
    bt5.set(3);   // 00001000 , set the 3rd bit
    bt5.reset(3); // 00000000 , reset the 3rd bit
    bt5.flip(3);  // 00001000 , flip the 3rd bit
    bt5.flip(3);  // 00000000 , flip the 3rd bit

    // you can count the number of set bits
    bt5 = 5;                     // 00000101
    cout << bt5.count() << endl; // 2

    // Bitset can be used as a container
    bitset<8> bt6(5);       // 00000101
    cout << bt6[0] << endl; // 1 , similar to vector
    // so stop using boolean vectors for visted array, use bitset instead as it is more efficient
    // and less memory consuming

    // Bitset can be used for bit manipulation
    bitset<8> a(5); // 00000101
    bitset<8> b(7); // 00000111

    cout << (a & b) << endl; // 00000101
    cout << (a | b) << endl; // 00000111
    cout << (a ^ b) << endl; // 00000010
    cout << (~a) << endl;    // 11111010 // eqv to flip all bits

    // you can also shift bits
    cout << (a << 1) << endl; // 00001010
    cout << (a >> 2) << endl; // 00000001

    // some of the usage of bitset are given as follows
    findAllSubarraySum({1, 5, 3, 6});

    return 0;
}

void findAllSubarraySum(vector<int> v)
{
    // find all subarray sum
    // for example, if v = {1, 5, 3, 6}
    // then all subarray sum are
    // 0, 1, 5, 3, 6, 1+5, 5+3, 3+6, 1+5+3, 5+3+6, 1+5+3+6
    // so the total number of subarray sum is 2^n
    // where n is the size of the array
    // so we can use bitset to find all subarray sum

    int n = v.size();
    // how many bits should you take?
    // ANS : It should be slightly greater than the total possible sum of the array

    // for our case 1 + 5 + 3 + 6 = 15, so we can take 16 bits ( or even 17,18,19...)
    // remember that bitset can have a size of at max 10^7 bits

    const int MAX_SUM = 16; // this has to be a "const" ,
    // bitset doesn't work with runtime created variables

    bitset<MAX_SUM> bt(0); // 16 bits is enough for this problem

    bt[0] = 1;
    for (int i = 0; i < n; i++)
    {
        bt = bt | (bt << v[i]);
    }
    // now whichever bit is set, that is the sum of the subarray
    cout << "Possible subarray sum are : ";
    for (int i = 0; i < MAX_SUM; i++)
    {
        if (bt[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}