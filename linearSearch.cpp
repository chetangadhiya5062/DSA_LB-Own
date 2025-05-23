#include <iostream>

using namespace std;

int main()
{

    int arr[5] = {3,4,2,5,1};

    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 4;

    for (int i =0 ; i <n ; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element " << arr[i] << " found at index: " << i << endl;
            break;
        }
    }


    return 0;
}