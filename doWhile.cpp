// doWhile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    char selection{};
    do {
        cout << "\n---------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;

        if (selection == '1')
            cout << "You chose 1 - doing this" << endl;
        else if (selection == '2')
            cout << "You chose 2 - doing that" << endl;
        else if (selection == '3')
            cout << "You chose 3 - doing something else" << endl;
        else if (selection == 'Q' || selection == 'q')
            cout << "Goodbye..." << endl;
        else
            cout << "Unknown option -- try again..." << endl;

    } while (selection != 'q' && selection != 'Q');

    cout << endl;
    return 0;
}




















































// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
