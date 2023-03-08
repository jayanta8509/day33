// Write a Program to check if String is a palindrome or not
#include <iostream>
using namespace std;
bool palindrome(string a) {
  int k = a.length();
  for (int i = 0; i < k / 2; i++) {
    if (a[i] != a[k - 1 - i]) {
      return false;
    }
  }
  return true;
}

int main() {
  string a;
  cin >> a;
  if (palindrome(a) == true) {
    cout << "Palindrome" << endl;
  } else {
    cout << "Not a Palindrome" << endl;
  }
}