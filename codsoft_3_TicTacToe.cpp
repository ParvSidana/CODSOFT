#include <bits/stdc++.h>
using namespace std;

char board[3][3];

int input;
int row, col;
char turn = 'X';
bool isDraw = false;
string choice;

void initialBoard()
{
    cout << "\n\n";
    cout << "\t\t     |     |     \n";
    cout << "\t\t  "
         << "1"
         << "  |  "
         << "2"
         << "  |  "
         << "3"
         << " \n";
    cout << "\t\t_____|_____|_____\n";
    cout << "\t\t     |     |     \n";
    cout << "\t\t  "
         << "4"
         << "  |  "
         << "5"
         << "  |  "
         << "6"
         << " \n";
    cout << "\t\t_____|_____|_____\n";
    cout << "\t\t     |     |     \n";
    cout << "\t\t  "
         << "7"
         << "  |  "
         << "8"
         << "  |  "
         << "9"
         << " \n";
    cout << "\t\t     |     |     \n";
}

void resetBoard()
{

    board[0][0] = ' ';
    board[0][1] = ' ';
    board[0][2] = ' ';
    board[1][0] = ' ';
    board[1][1] = ' ';
    board[1][2] = ' ';
    board[2][0] = ' ';
    board[2][1] = ' ';
    board[2][2] = ' ';
}
// displaying the board of tic tac toe.

void displayBoard()
{

    cout << "\n\n";
    cout << "\t\t     |     |     \n";
    cout << "\t\t  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << " \n";
    cout << "\t\t_____|_____|_____\n";
    cout << "\t\t     |     |     \n";
    cout << "\t\t  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << " \n";
    cout << "\t\t_____|_____|_____\n";
    cout << "\t\t     |     |     \n";
    cout << "\t\t  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << " \n";
    cout << "\t\t     |     |     \n";
}

// determining which

void playerTurn()
{

    if (turn == 'X')
    {
        cout << "\n\tPlayer - 1 turn (X) : ";
    }
    else if (turn == 'O')
    {
        cout << "\n\tPlayer - 2 turn (O) : ";
    }

    cin >> input;

    switch (input)
    {
    case 1:
        row = 0;
        col = 0;
        break;

    case 2:
        row = 0;
        col = 1;
        break;

    case 3:
        row = 0;
        col = 2;
        break;

    case 4:
        row = 1;
        col = 0;
        break;

    case 5:
        row = 1;
        col = 1;
        break;

    case 6:
        row = 1;
        col = 2;
        break;

    case 7:
        row = 2;
        col = 0;
        break;

    case 8:
        row = 2;
        col = 1;
        break;

    case 9:
        row = 2;
        col = 2;
        break;

    default:
        cout << "OOPs!! You entered the wrong data...";
        break;
    }

    if (turn == 'X' && board[row][col] != 'X' && board[row][col] != 'O')
    {
        // updating the position for 'X' symbol if
        // it is not already occupied
        board[row][col] = 'X';
        turn = 'O';
    }
    else if (turn == 'O' && board[row][col] != 'X' && board[row][col] != 'O')
    {
        // updating the position for 'O' symbol if
        // it is not already occupied
        board[row][col] = 'O';
        turn = 'X';
    }
    else
    {
        // if input position already filled
        cout << "\n\n\tBox is already filled!!\n\tSeems your Opponent is Smarter :)\n\tPlease choose another!!\n\n";
        playerTurn();
    }
}

// checking for win ,draw or lose...

bool isgameOver()
{

    // checking the win for Simple Rows and Simple Column
    for (int i = 0; i < 3; i++)
    {
        if ((board[i][1] == board[i][0] && board[i][0] == board[i][2] && board[i][0] != ' ') || (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' '))
            return false;
    }
    // checking the win for both diagonal

    if ((board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ') || (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' '))
        return false;

    // Checking the game is in continue mode or not
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return true;
        }
    }

    // Checking if the is game already drawn
    isDraw = true;

    return false;
}

int main()
{

    isDraw = false;
    bool winner = 1;
    resetBoard();

    cout << "\t\t\tT I C K -- T A C -- T O E -- G A M E\t\t\t";
    cout << "\n\t\t\t\tFOR 2 PLAYERS\n\n\n";

    cout << "PLAYER - 1 ==> [X]     <-->    PLAYER - 2 ==> [O]\n\n";
    initialBoard();

    while (winner)
    {

        playerTurn();

        if (!isgameOver())
        {
            winner = 0;
        }
        displayBoard();
    }

    // displayBoard();

    if (turn == 'O' && isDraw == false)
    {
        cout << "\n\nCongratulations!!! Player-1 with 'X' has won the game:)\n\n";
    }

    else if (turn == 'X' && isDraw == false)
    {
        cout << "\n\nCongratulations!!! Player-2 with 'O' has won the game:)\n\n";
    }

    else
        cout << "\n\nGAME DRAW!!!\n\n";

    cout << "Want to Play another game ? \n\tYES   or   NO\n";

    cin >> choice;

    if (choice == "Yes" || choice == "yes")
    {
        main();
    }

    else
        cout << "\nThanks for Playing!! Hope you enjoyed....\n\n";

    return 0;
}