// C++ program to check if a number is Palindrome
#include <iostream>
using namespace std;
// Function to check Palindrome
bool checkPalindrome(int n)
{
    int reverse = 0;
    // Copy of the original number so that the original
    // number remains unchanged while finding the reverse
    int temp = n;
    while (temp != 0) {
        reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;
    }
    // If reverse is equal to the original number, the
    // number is palindrome
    return (reverse == n);
}
int main()
{
    // Sample Input
    int n = 12321;
    if (checkPalindrome(n) == 1) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
    return 0;
}
