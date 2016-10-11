#include <iostream>

using namespace std;

int findFibonacci(int x);

int main()
{
    cout << "Enter the index of fibonacci number required: " << endl;

    int x;
    cin >> x;

    cout << findFibonacci (x) << endl;
}

int findFibonacci(int x) {
    int a = 1;

    if (x == 1 || x == 2) {
        return a;
    } else {
        return findFibonacci(x-1)+findFibonacci(x-2);
    }
}
