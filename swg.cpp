#include <bits/stdc++.h>
using namespace std;

int swg(char user, char comp)
{
    if (user == comp)
    {
        return 0;
    }
    else if (user == 's' && comp == 'w')
    {
        return 1;
    }
    else if (user == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (user == 'g' && comp == 's')
    {
        return 1;
    }
    else if (user == 'w' && comp == 's')
    {
        return -1;
    }
    else if (user == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (user == 's' && comp == 'g')
    {
        return -1;
    }
}


int main()
{
    char user_input;
    char comp_input;
    char play;
    int user_win = 0;
    int comp_win = 0;
    srand((unsigned)time(0));

    cout << "\t*****************WELCOME TO SNAKE-WATER-GUN GAME*****************" << endl;
    cout << endl;
    cout << "For user, the choices are:- " << endl;
    cout << "Press s for snake " << endl;
    cout << "Press w for water " << endl;
    cout << "Press g for gun " << endl;
    cout << endl;
start:
    int number = (rand() % 100) + 1;
    if (number < 33)
    {
        comp_input = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp_input = 'w';
    }
    else
    {
        comp_input = 'g';
    }
    cout << "\t ***************************************************************************************" << endl;
    cout << endl;

    cout << "\tEnter your choice:- ";
    cin >> user_input;
    cout << "\tComputer's choice is:- ";
    cout << comp_input << endl;

    int result = swg(user_input, comp_input);

    if (result == 0)
    {
        cout << "\t\tGame Drawn" << endl;
    }
    else if (result == 1)
    {
        user_win = user_win + 1;
        cout << "\t\tYou Win !!!!!" << endl;
    }
    else
    {
        comp_win = comp_win + 1;
        cout << "\t\tComputer wins !!!!" << endl;
    }
    cout << "\t\tYOU                      COMP" << endl;
    cout << "\t\t"<<user_win << "                         " << comp_win << endl;
    cout << endl;

    cout << "\t\tDo you want to play more (y/n):- ";
    cin >> play;
    if (play == 'y')
    {
        goto start;
    }
    else
    {
        cout << endl;
        cout << "\t\t\tThanks for playing :)" << endl;
    }

    return 0;
}