#include <iostream>
using namespace std;

int main() {
    string password;
    
    cout << " Enter your password: ";
    cin >> password;

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    for (int i = 0; i < password.length(); i++) {
        char ch = password[i];

        if (ch >= 'A' && ch <= 'Z') {
            hasUpper = true;
        }
        else if (ch >= 'a' && ch <= 'z') {
            hasLower = true;
        }
        else if (ch >= '0' && ch <= '9') {
            hasDigit = true;
        }
        else {
            hasSpecial = true;
        }
    }

    if (password.length() >= 8 && hasUpper && hasLower && hasDigit && hasSpecial) {
        cout << "Strong Password" << endl;
    }
    else {
        cout << " Weak Password" << endl;
    }

    return 0;
}