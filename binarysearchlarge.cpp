#include <iostream>

using namespace std;

void binaryLargeSearch (int *arr, int b, int element);

int main()
{
    int *arr;

    int b;

    cout << "Enter the array size: " << endl;
    cin >> b;

    arr = new int[b];


    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < b; i++) {
        cin >> *(arr+i);
    }
    int e;

    cout << "Enter the element to search: " << endl;
    cin >> e;

    binaryLargeSearch(arr, b, e);

    return 0;
}


void binaryLargeSearch (int *arr, int b, int element) {
    int i = 0;
    int l = b-1;
    int m = (i+l) / 2;
    while (i <= l) {
        if (*(arr+m) < element && *(arr+m+1)>= element){
            cout << *(arr+m+1) << " --- Index is: " << m+1 << endl;
            break;
        }
        if (*(arr+m) >= element && *(arr+m-1)< element){
            cout << *(arr+m) << " --- Index is: " << m << endl;
            break;
        }
        if (*(arr+m) < element) {
            i = m+1;
            m = (i+l) / 2;
        } else {
            l = m-1;
            m = (i+l) / 2;
        }
    }
}
