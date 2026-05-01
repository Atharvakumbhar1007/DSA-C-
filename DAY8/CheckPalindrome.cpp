#include <iostream>
using namespace std;

bool ispalindrome(string str, int left, int right) {
    if (left >= right)
        return true;

    if (str[left] != str[right])
        return false;

    return ispalindrome(str, left + 1, right - 1);
}

int main() {
    string str;
    cout << "Enter String: ";
    cin >> str;

    if (ispalindrome(str, 0, str.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}