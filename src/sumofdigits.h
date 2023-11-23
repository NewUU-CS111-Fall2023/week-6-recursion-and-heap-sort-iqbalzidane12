#include<iostream>
using namespace std;

// Function to calculate the sum of digits of a number using recursion
// Time complexity: O(log N), where N is the input number
int sumOfDigits(int N) {
    // Base case: if N is less than 10, return N
    if(N < 10) {
        return N;
    }
    // Recursive case: return the last digit of N plus the sum of the digits of N/10
    else {
        return N % 10 + sumOfDigits(N / 10);
    }
}

int sumofdigits() {
    int N;
    cout << "Enter a natural number N: ";
    cin >> N;
    cout << "The sum of the digits of " << N << " is " << sumOfDigits(N) << endl;
    return 0;
}
//Muxtorov A 20221500484