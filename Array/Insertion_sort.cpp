// Program: Insertion Sort
// Description: Implements the insertion sort algorithm to sort an array of integers in ascending order.
// Time Complexity: O(n^2) in the worst case, O(n) in the best case (when the array is already sorted).
#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]< arr[j-1])
            {
                swap(arr[j],arr[j-1 ]);
            }
            else
            break;
        }
    }
    for(int i=0;i<n;i++ )
    {
        cout<<arr[i]<<" ";
    }
}