/*
 * Author:
 * Date:
 * Name:
 */
#include<iostream>
using namespace std;

// Function to print numbers from A to B
// Time complexity: O(abs(B-A)), where abs(B-A) is the absolute difference between A and B
void printNumbers(int A, int B) {
    if(A < B) {
        for(int i = A; i <= B; i++) {
            cout << i << " ";
        }
    } else {
        for(int i = A; i >= B; i--) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int task_1() {
    int A, B;
    cout << "Enter two integers A and B: ";
    cin >> A >> B;
    printNumbers(A, B);
    return 0;
}
