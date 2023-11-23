#include<iostream>
#include<string>
using namespace std;

// Function to check if a string is a palindrome using recursion
// Time complexity: O(N), where N is the length of the string
bool isPalindrome(string str, int start, int end) {
    // Base case: if start index is greater than or equal to end index, the string is a palindrome
    if(start >= end) {
        return true;
    }
    // If the characters at the start and end indices are not the same, the string is not a palindrome
    else if(str[start] != str[end]) {
        return false;
    }
    // Recursive case: check the next pair of characters
    else {
        return isPalindrome(str, start + 1, end - 1);
    }
}

int task_5() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if(isPalindrome(str, 0, str.length() - 1)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}
//Muxtorov A 20221500484