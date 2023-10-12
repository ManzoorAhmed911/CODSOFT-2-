#include <iostream>
#include <random>

using namespace std;

int main() {
    int guess, i=0;
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> distribution(-50, 200);

    int random_number = distribution(gen);

 

    cout << "Enter Your Guesses"<<endl;
    while (cin >> guess)
    {
        if (guess < random_number)
        {
            cout << "Guess is  Low"<< endl;
            i++;
        }
        else if (guess > random_number )
        {
            cout << "Guess is  high"<< endl;
            i++;

        }
        else if (guess == random_number)
        {
            cout << "Your Guess is Right" << endl;
            i++;
            break;
        }

    }
    cout << "Your guessed the number on " << i << "th guess" << endl;
    return 0;
}
