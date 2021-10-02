#include <iostream>
using namespace std;
// jenny's video of binary search
// BINARY SEARCH:
int binary_search(int arr[],int n,int search){
    int left=0;
    int right=n;
     while(left<=right)
    {
       int mid=n/2;
        if (arr[mid]==search)
        {
            return mid;
        }
        else if (arr[mid]>search)
        {
            right = mid-1;

        }
        else{
            left= mid+1;
        }  
    }
        return -1; 
}
// If we have to find an element which is not present in the array then stopping condition of the search will (left > right) when this condition will meet search/program will stop
int main()
{
    int search ,n;
    int arr[n];
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout << "Enter the element of array" << endl;
    for (int i = 0; i <n; i++)
    {
        cin>> arr[i];
    }
    cout << "Enter the element to find in the array" << endl;
    cin >> search;
    cout<<binary_search(arr,n,search)<<endl;
   
    
    // LINEAR SEARCH:
    // for (int i = 0; i <n; i++)
    // {
    //     if (search == arr[i])
    //     {
    //         cout << "Yes element " << search << " is present at index " <<i<< endl;
    //     }
    // }
    // return -1;

    return 0;
}
