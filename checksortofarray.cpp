#include <iostream>

using namespace std;

void checkSort (int x[], int y);

int main()
{
    cout << "Enter the length of array: " << endl;
    int l;
    cin >> l;

    int a[l];
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < l; i++) {
        cin >> a[i];
    }

    checkSort (a, l);

    return 0;
}

void checkSort (int x[], int y) {

    bool b = true;
    int counter1 = 0;
    int counter2 = 0;

    for (int i = 0; i< y-1; i++) {
        if (x[i]<x[i+1]) {
            counter1 += 1;
        }
        if (x[i]>x[i+1]) {
            counter2 += 1;
        }
    }
    if (counter1 == 0 || counter2 == 0) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }

}
