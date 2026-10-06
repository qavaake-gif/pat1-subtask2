#include <iostream>
using namespace std;

int main()
{
    int temp1, temp2, temp3;
    int difference;

    // Input first temperature
    cout << "Enter the first temperature reading: ";
    cin >> temp1;

    // Input second temperature
    cout << "Enter the second temperature reading: ";
    cin >> temp2;

    // Calculate difference
    difference = temp2 - temp1;

    // Check temperature increase
    if (difference > 50)
    {
        cout << "Reduce fryer heat before taking the third reading." << endl;
    }
    else if (difference < 10)
    {
        cout << "Increase the fryer heat before taking the third reading." << endl;
    }

    // Input third temperature
    cout << "Enter the third temperature reading: ";
    cin >> temp3;

    // Check if oil is ready
    if (temp3 >= 150 && temp3 <= 190)
    {
        cout << "You may start frying the Magwinyas" << endl;
    }
    else
    {
        cout << "Oil is not ready for frying!" << endl;
    }

    return 0;
}