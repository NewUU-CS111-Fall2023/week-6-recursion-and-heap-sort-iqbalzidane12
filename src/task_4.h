#include<iostream>
using namespace std;
// Time complexity: O(N), where N is the input number
bool isPrime(int N, int i = 2) {
    // Base case: if N is 2, it is prime
    if(N == 2) {
        return true;
    }
    // If N is divisible by any number between 2 and N/2, it is not prime
    else if(N % i == 0) {
        return false;
    }
    // If i is greater than N/2, we have checked all possible factors of N and it is prime
    else if(i * i > N) {
        return true;
    }
    // Recursive case: check if N is divisible by the next number
    else {
        return isPrime(N, i + 1);
    }
}

int task_4() {
    int N;
    cout << "Enter a natural number N (>1): ";
    cin >> N;
    if(isPrime(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
