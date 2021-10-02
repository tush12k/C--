#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 1, 3, 2, 5, 8, 9, 6, 7, 10};
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
}