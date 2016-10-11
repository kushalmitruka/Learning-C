#include <iostream>

using namespace std;

int main()
{
    int A[5] = {0,1,1,1,0};
    int B[5] = {1,1,0,1,0};

    int C[6];

    int x = 0;

    for (int i = 4; i >= 0; i--) {
        int z = A[i]+B[i]+x;
        if (z == 0 || z == 1) {
            C[i+1] = z;
        } else {
            C[i+1] = z - 2;
            x = 1;
        }
    }
    C[0] = x;

    for (int i = 0; i < 6; i++) {
        cout << C[i] << endl;
    }
}
