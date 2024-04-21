// palindrome in a string 
#include <iostream>

#include <cctype> // For isalnum()
using namespace std;

bool isPalindrome(std::string s) {
    // Convert to lowercase
    for (char& c : s) {
        c = std::tolower(c);
    }

    // Remove non-alphanumeric characters
    std::string cleaned;
    for (char c : s) {
        if (std::isalnum(c)) {
            cleaned += c;
        }
    }

    // Check if cleaned string is a palindrome
    int left = 0;
    int right = cleaned.size() - 1;
    while (left < right) {
        if (cleaned[left] != cleaned[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    if (isPalindrome(input)) {
        std::cout << "It's a palindrome!" << std::endl;
    } else {
        std::cout << "Not a palindrome." << std::endl;
    }

    return 0;
}
