#include <iostream>
using namespace std;

int main()
{
    int temp1, temp2, temp3;
    int increase;

    cout << "Enter first temperature: ";
    cin >> temp1;

    cout << "Enter second temperature: ";
    cin >> temp2;

    increase = temp2 - temp1;

    if (increase > 50)
        cout << "Reduce fryer heat" << endl;
    else if (increase < 10)
        cout << "Increase fryer heat" << endl;

    cout << "Enter third temperature: ";
    cin >> temp3;

    if (temp3 >= 150 && temp3 <= 200)
        cout << "Start frying Magwinyas" << endl;
    else
        cout << "Oil not ready for frying" << endl;

    return 0;
}