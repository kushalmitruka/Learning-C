#include <iostream>

using namespace std;

int insertionSortd(int arr[], int b);

int main(){
    int *arr;

    int b;

    cout << "Enter the array size: " << endl;
    cin >> b;

    arr = new int[b];


    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < b; i++) {
        cin >> *(arr+i);
    }


    insertionSortd(arr, b);

    for (int i =0; i < b; i++) {
        cout << *(arr+i) << endl;

    }
    return 0;
}

int insertionSortd(int *arr, int b) {
    int temp;

    for (int i =1; i < b; i++) {
        temp = *(arr+i);
        for (int j = i-1; j >= 0; j--){
            if (temp <= *(arr+j)) {
            *(arr+j+1) = *(arr+j);
            *(arr+j) = temp;
            }
        }

    }



    return 0;
}
