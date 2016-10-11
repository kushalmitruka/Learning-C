#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
void printGrid (int *pos, int *pos1, int *pos2, char person);
void userInput(int *pos);
void leftMove (int *pos);
void rightMove (int *pos);
void upMove (int *pos);
void downMove (int *pos);
void createGrid();
void moveEnemy (int *pos1, int *pos2);

string grid[10][10];

int main()
{
    int *posE1;
    int *posE2;
    posE1 = new int [2];
    posE2 = new int [2];

    *posE1 = 0 ;
    *(posE1 + 1) = 9;

    *posE2 = 7;
    *(posE2 + 1) = 2;

    int *posT;
    posT = new int[2];
    *posT = 1;
    *(posT+1) = 1;

    cout << "Enter the letter you wish to play as: " << endl;
    char player;
    cin >> player;
    printGrid(posT, posE1, posE2, player);

    while (*posT != 9 && *(posT+ 1) != 9 ) {
        userInput (posT);

        //Enemy moves
        moveEnemy(posE1, posE2);


        if (*posT == 2 && *(posT+ 1) == 7) {
            cout << "You fall on trap. Game Over" << endl;
            exit(0);
        }

        if (*posT == 3 && *(posT+ 1) == 5) {
            cout << "You fall on trap. Game Over" << endl;
            exit(0);
        }

        if (*posT == 4 && *(posT+ 1) == 8) {
            cout << "You fall on trap. Game Over" << endl;
            exit(0);
        }

        if (*posT == 6 && *(posT+ 1) == 3) {
            cout << "You fall on trap. Game Over" << endl;
            exit(0);
        }

        if (*posT == 7 && *(posT+ 1) == 8) {
            cout << "You fall on trap. Game Over" << endl;
            exit(0);
        }

        if (*posT == 8 && *(posT+ 1) == 7) {
            cout << "You fall on trap. Game Over" << endl;
            exit(0);
        }

        if (*posT == *posE1 && *(posT+1) == *(posE1+1)) {
            cout << "An enemy has killed you. bad luck !!" << endl;
            exit(0);
        }

        if (*posT == *posE2 && *(posT+1) == *(posE2+1)) {
            cout << "An enemy has killed you. bad luck !!" << endl;
            exit(0);
        }



        printGrid(posT, posE1, posE2, player);
    }

    if (*posT == 9 && *(posT+ 1) == 9 ) {
        cout << "Congratulations, you won !!!" << endl;


    }






    return 0;
}

void leftMove (int *pos) {
    if (*(pos+1) == 0) {
        cout << "Not possible. moving out of grid" << endl;
    } else {
        *(pos+1) -= 1;
    }
}

void rightMove (int *pos) {
    if (*(pos+1) == 9) {
        cout << "Not possible. moving out of grid" << endl;
    } else {
        *(pos+1) += 1;
    }
}

void upMove (int *pos) {
    if (*pos == 0) {
        cout << "Not possible. moving out of grid" << endl;
    } else {
        *pos -= 1;
    }
}

void downMove (int *pos) {
    if (*pos == 9) {
        cout << "Not possible. moving out of grid" << endl;
    } else {
        *pos += 1;
    }
}


void printGrid (int *pos, int *pos1, int *pos2, char person) {
    createGrid();
    grid[*pos][*(pos+1)] = person;
    grid[*pos1][*(pos1+1)] = "E";
    grid[*pos2][*(pos2+1)] = "E";

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << grid[i][j];
        }
        cout << "" << endl;
    }
}


void userInput(int *pos) {
    cout << "Enter the move you wish to make" << endl;
    cout << "Allowed moves are : Left -> l, Right -> r, Up -> u, Down -> d" << endl;

    char userMove;
    cin >> userMove;

    switch (userMove) {
    case 'l':
        leftMove(pos);
        break;
    case 'r':
        rightMove(pos);
        break;
    case 'u':
        upMove(pos);
        break;
    case 'd':
        downMove(pos);
        break;
    default:
        cout << "invalid move!!!" << endl;
    }
}

void createGrid() {
            // Creating a 2D array to form the base grid
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            grid[i][j] = ".";
        }
    }

    grid[9][9] = "X"; // final destination fixed
    grid[2][7] = "T";
    grid[3][5] = "T";
    grid[4][8] = "T";
    grid[6][3] = "T";
    grid[7][8] = "T";
    grid[8][7] = "T";

}


void moveEnemy (int *pos1, int *pos2) {
        srand(time(0));
        int x1 = rand()%4;

        srand (time(0)-(10^5));
        int x2 = rand()%4;

        switch (x1) {
        case 0:
            if (*(pos1+1) != 0){
                leftMove(pos1);
            }
        case 1:
            if (*(pos1+1) != 9) {
                rightMove(pos1);
            }
        case 2:
            if (*pos1 != 0) {
                upMove(pos1);
            }
        case 3:
            if (*pos1 != 9) {
                downMove(pos1);
            }

        }

        switch (x2) {
        case 0:
            if (*(pos2+1) != 0){
                leftMove(pos2);
            }
        case 1:
            if (*(pos2+1) != 9) {
                rightMove(pos2);
            }
        case 2:
            if (*pos2 != 0) {
                upMove(pos2);
            }
        case 3:
            if (*pos2 != 9) {
                downMove(pos2);
            }

        }

}
