// #include <iostream>
// using namespace std;
// //                       [ BUBBLE SORT ARRAY ] method 1st
// // Time complexity is: O(n^2)
// int main()
// {
//     int arr[] = {12, 15, 13, 14, 11};
//     int counter = 1;
//     while (counter < 5)
//     {
//         for (int i = 0; i < 5 - counter; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//         counter++;
//     }
//     cout << "The sorted array is:" << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << endl;
//     }
// }


//                           [ BUBBLE SORT ARRAY ] method 2nd
#include<iostream>
using namespace std;

int main()
{
    int arr[]={12,15,11,14,13};
    for (int i = 0; i <4; i++) // this for loop is for passing the array 
    {
        for (int j =0; j<4-i; j++) // this for loop is for comparing two element of array
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    cout<<"The sorted array is"<<endl;
    for (int i = 0; i <5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}