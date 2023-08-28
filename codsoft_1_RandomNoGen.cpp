#include <bits/stdc++.h>
using namespace std;

void randomNumGen()
{

    srand(time(0));

    int maxi = 101;
    int random = rand() % maxi;

    cout << "Welcome Coders,\nReady to play the Number Guessing Game...\nRules are simple just guess the correct number and win BUT remember you have only '10' Choices." << endl;
    int input;
    cout << "Start your First Guess -> " << endl;
    cin >> input;
    int count = 10;

    while (random != input && count > 0)
    {

        count--;
        if (input > random)
        {
            cout << "Close, but you guessed a little HIGH." << endl;
            cout << "Remaining choices : " << count << endl;
        }
        else if (input < random)
        {
            cout << "Close, but you guessed a little LOW." << endl;
            cout << "Remaining choices : " << count << endl;
        }
        cout << "Your next Guess -> " << endl;
        cin >> input;
    }

    if (random == input)
    {
        cout << "Well played! You won, " << random << " is the required number" << endl;
        cout << "\tThanks for playing...." << endl;
    }

    else
    {
        cout << "You couldn't find the number, it was " << random << ", You lose!!\n\n";
    }
}
int main()
{
    randomNumGen();

    return 0;
}
