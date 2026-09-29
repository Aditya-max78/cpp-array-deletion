
#include <iostream>
using namespace std;

int main()
{
    int pos;

    cout << "Enter position to delete: ";
    cin >> pos;

    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    for (int i = pos - 1; i < 9; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < 9; i++)
    {
        cout << "Index is " << i
             << " value is " << arr[i] << "\n";
    }

    return 0;
}

