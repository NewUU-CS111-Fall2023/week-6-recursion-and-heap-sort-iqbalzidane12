#include <iostream>
#include <cmath>
// Function to calculate the product of two numbers using Karatsuba algorithm
// This function runs in O(n^1.585) time
//Muxtorov Abdulaziz 20221500484 SSE3
long long karatsubaMultiply(long long x, long long y) {
    // the base case for recursion
    if (x < 10 || y < 10)
        return x * y;

    int N = std::max((int)log10(x)+1, (int)log10(y)+1);
    int half = (N+1) / 2;

    long long a = x / pow(10, half);
    long long b = x % (long long)pow(10, half);
    long long c = y / pow(10, half);
    long long d = y % (long long)pow(10, half);

    // three recursive calls made to numbers approximately half the size
    long long ac = karatsubaMultiply(a, c);
    long long bd = karatsubaMultiply(b, d);
    long long abcd = karatsubaMultiply(a+b, c+d);

    return ac * pow(10, 2*half) + (abcd - ac - bd) * pow(10, half) + bd;
}

int task_8() {
    long long x, y;
    std::cout << "Enter two numbers: ";
    std::cin >> x >> y;
    std::cout << "The product is: " << karatsubaMultiply(x, y) << std::endl;
    return 0;
}
