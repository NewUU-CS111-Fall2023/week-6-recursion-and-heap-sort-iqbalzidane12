#include<iostream>
using namespace std;

// Function to find the second largest number in a sequence using recursion
// Time complexity: O(N), where N is the length of the sequence
void secondLargest(int &max1, int &max2) {
    int num;
    cin >> num;
    // Base case: if the number is 0, end the recursion
    if(num == 0) {
        return;
    }
    // If the number is greater than max1, update max1 and max2
    else if(num > max1) {
        max2 = max1;
        max1 = num;
    }
    // If the number is between max1 and max2, update max2
    else if(num > max2 && num < max1) {
        max2 = num;
    }
    // Recursive case: get the next number in the sequence
    secondLargest(max1, max2);
}

int task_6() {
    int max1 = -1, max2 = -1;
    cout << "Enter a sequence of natural numbers ending with 0: ";
    secondLargest(max1, max2);
    cout << "The second largest number in the sequence is " << max2 << endl;
    return 0;
}
