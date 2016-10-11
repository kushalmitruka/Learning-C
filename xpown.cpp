#include <iostream>


using namespace std;

int nthSquare (int x, int n) {
    if (n == 1) {
        return x;
    } else {
        return x*nthSquare(x,n-1);
    }
}

int main()
{
    int x = 2;
    int n1 = 3;
    int n2 = 5;
Selection Sort
    cout << nthSquare(x,n1) << endl;
    cout << nthSquare(x,n2) << endl;
    cout << nthSquare(x,1) << endl;
}
