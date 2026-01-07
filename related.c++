#include <iostream>
#include <cstring>

using namespace std;

int main() {

    // memset is a C-style function used to set a block of memory to a specific byte value.
    // void* memset(void* ptr, int value, size_t num); #include <cstring>
    int arr[5];
    memset(arr, 0, sizeof(arr)); // output 0 0 0 0 0

    char str[20];
    memset(str, 'A', sizeof(str)); // output AAAAAAAAAAAAAAAA

    struct Node {
        int a;
        double b;
    }
    Node n;
    memset(&n, 0, sizeof(n)); // output 0 0

    // ❌ Using memset on C++ objects
    class A {
        int x;
    public:
        A() {}
    };

    A obj;
    memset(&obj, 0, sizeof(obj)); // ❌ Undefined behavior because x is not initialized
    // output 0

    int* ptr = new int[10];

    memset(ptr, 0, 10 * sizeof(int)); // output 0 0 0 0 0 0 0 0 0 0
    return 0;
}