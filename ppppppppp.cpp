#include <iostream>
#include <bitset>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int choice;

    cout << "===== MENU =====" << endl;
    cout << "1. Decimal to Binary" << endl;
    cout << "2. Binary to Decimal" << endl;
    cout << "3. Decimal to Hexadecimal" << endl;
    cout << "4. Hexadecimal to Decimal" << endl;
    cout << "5. Random Number (0-99) to Binary" << endl;
    cout << "6. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        int decimal;
        cout << "Enter decimal number: ";
        cin >> decimal;
        cout << "Binary: " << bitset<16>(decimal) << endl;
    }
    else if (choice == 2) {
        string binary;
        int decimal = 0;
        cout << "Enter binary number: ";
        cin >> binary;

        for (char c : binary) {
            decimal = decimal * 2 + (c - '0');
        }

        cout << "Decimal: " << decimal << endl;
    }
    else if (choice == 3) {
        int decimal;
        cout << "Enter decimal number: ";
        cin >> decimal;
        cout << "Hexadecimal: " << hex << decimal << endl;
    }
    else if (choice == 4) {
        int decimal;
        cout << "Enter hexadecimal number: ";
        cin >> hex >> decimal;
        cout << "Decimal: " << dec << decimal << endl;
    }
    else if (choice == 5) {
        srand(time(0));
        int randomNumber = rand() % 100;
        cout << "Random Number: " << randomNumber << endl;
        cout << "Binary: " << bitset<8>(randomNumber) << endl;
    }
    else if (choice == 6) {
        cout << "Program Ended." << endl;
    }
    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
