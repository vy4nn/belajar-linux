#include <iostream>

using namespace std;

int main()
{
    int choice;

    cout << "Please Choose Your Difficulty:" << endl;
    cout << "1. Easy (1-10)" << endl;
    cout << "2. Normal (1-50)" << endl;
    cout << "3. Hard (1-100)" << endl;

    cin >> choice;

    while(choice < 1 || choice > 3)
    {
        cout << "There is no choice available! Try again." << endl;
        cin >> choice;
    }

    int secret;

    if(choice == 1)
        secret = 7;
    else if(choice == 2)
        secret = 23;
    else
        secret = 65;

    int maxRange;

    if(choice == 1)
        maxRange = 10;
    else if(choice == 2)
        maxRange = 50;
    else
        maxRange = 100;

    int guess;
    int count = 0;

    cout << "Guess The Number Between (1-" << maxRange << ")" << endl;

    while(true)
    {
        cin >> guess;

        while(guess < 1 || guess > maxRange)
        {
            cout << "You are out of range! Try again." << endl;
            cin >> guess;
        }

        count++;

        cout << "Attempt " << count << ": " << guess << endl;

        if(guess < secret)
        {
            cout << "Higher!" << endl;
        }
        else if(guess > secret)
        {
            cout << "Lower!" << endl;
        }
        else
        {
            cout << "Congratulations! You guessed it right!" << endl;
            break;
        }
    }

    return 0;
}
