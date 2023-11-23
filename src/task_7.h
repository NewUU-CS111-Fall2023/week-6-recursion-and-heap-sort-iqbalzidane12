#include <iostream>
// This function runs in O(log(n)) time
int reverse(int n, int rev = 0) {
    // Base case: if the number is less than 10
    if (n < 10)
        return rev * 10 + n;

    // Recursive case: reverse the rest of the number and append the last digit
    return reverse(n / 10, rev * 10 + n % 10);
}

int task_7() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "The reversed number is: " << reverse(n) << std::endl;
    return 0;
}
//Muxtorov Abdulaziz 20221500484 SSE3