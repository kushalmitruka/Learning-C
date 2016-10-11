#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
 /*   srand (time(0));
    int x;
    x = (rand()%100 + 1);
    int y;
    int counter = 0;

    while (x != y){
        cout << "Guess the number b/w 1 & 100: " << endl;
        cin >> y;

        counter += 1;

        if (x > y) {
            cout << "Guess is too low" << endl;
        } if (x < y) {
            cout << "Guess is too high" << endl;
        }

    }

    if (x == y) {
        cout << "Correct Guess in " << counter << " number of guesses" << endl;
    }
*/

    cout << "Hello world, Choose a number b/w 1-100." << endl;
    cout << "Now I will read your mind to guess the number" << endl;
    cout << "Just tell me if I am guessing too high or too low" << endl;
    cout << "'too high' --> 1, 'too low' --> 2 and 'correct' --> 0 " << endl;
    cout << "Enter 1 to continue and choose a number" << endl;

    int y;
    cin >> y;
    int a = 0;
    int b = 100;
    int x = (a+b)/2;
    int counter = 0;
    while (y != 0) {
        cout << "The number is: " << x << endl;
        cin >> y;
        counter += 1;
        if (y == 1) {
            b = x;
            x = (a+b)/2;
        }
        if (y == 2) {
            a = x;
            x = (a+b)/2;
        }
    }

    if (y == 0) {
        cout << "I did it in " << counter << "steps" << endl;
    }

    return 0;
}
