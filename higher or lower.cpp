#include <iostream>
#include <ctime>
using namespace std;

//Thinks of a random number and tells you if your guess is higher or lower until its correct

int main()
{
    
    srand(time(0)); //Used to change the random number

    int random = rand() % 100 + 20; //random number gerator
    int guess = 0;
    int moves = 0;

    do
    {
        moves++;
        cout << "Enter your guess:  ";
        cin >> guess;
        if (guess == random)
            cout << "Congrats! Right after " << moves << " moves." << endl;
        else if (guess < random)
            cout << "Wrong number! You entered a lower number." << endl;
        else
            cout << "Wrong guess! You entered a higher number." << endl;
    } while (guess != random);
    system("pause>0");
}

