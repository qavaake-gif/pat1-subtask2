#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Conversion Menu:" << endl;
    cout << "1. Decimal to Binary" << endl;
    cout << "2. Binary to Decimal" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        int decimal, binary = 0, place = 1, remainder;

        cout << "Enter a decimal number: ";
        cin >> decimal;

        while (decimal > 0) {
            remainder = decimal % 2;
            binary += remainder * place;
            decimal = decimal / 2;
            place *= 10;
        }

        cout << "Binary representation: " << binary << endl;
    }

    else if (choice == 2) {
        int binary, decimal = 0, base = 1, remainder;

        cout << "Enter a binary number: ";
        cin >> binary;

        while (binary > 0) {
            remainder = binary % 10;
            decimal += remainder * base;
            binary = binary / 10;
            base *= 2;
        }

        cout << "Decimal representation: " << decimal << endl;
    }

    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}