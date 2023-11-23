#include<iostream>
using namespace std;

// Function to check if a number is a power of two using recursion
// Time complexity: O(log N), where N is the input number
bool isPowerOfTwo(int N) {
    // Base case: if N is 1, it is a power of two
    if(N == 1) {
        return true;
    }
    // If N is even, recursively check if N/2 is a power of two
    else if(N % 2 == 0) {
        return isPowerOfTwo(N / 2);
    }
    // If N is not 1 and not even, it is not a power of two
    else {
        return false;
    }
}

int isPowerOfTwo() {
    int N;
    cout << "Enter a natural number N: ";
    cin >> N;
    if(isPowerOfTwo(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
