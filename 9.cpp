#include <iostream>
using namespace std;

int main()

{
    int i, n, cube;
    cout << "Input the number of terms : ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {

        cube = i * i * i;
        cout << "Number is: " << i << " and its cube is: " << cube << endl;
    }
}