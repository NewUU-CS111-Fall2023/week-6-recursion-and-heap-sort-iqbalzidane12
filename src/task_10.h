#include <iostream>
#include <algorithm>
#include <vector>
/*Muxtorov Abdulaziz 20221500484 SSE3*/
// Function to check if a character is a vowel
// This function runs in O(1) time
bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

// Function to sort the vowels in a string
// This function runs in O(n log(n)) time
std::string sortVowels(std::string s) {
    std::vector<char> vowels;

    for (char c : s)
        if (isVowel(c))
            vowels.push_back(c);

    std::sort(vowels.begin(), vowels.end());

    for (char &c : s)
        if (isVowel(c))
            c = vowels.front(), vowels.erase(vowels.begin());

    return s;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    std::cout << "The string with sorted vowels is: " << sortVowels(s) << std::endl;
    return 0;
}
