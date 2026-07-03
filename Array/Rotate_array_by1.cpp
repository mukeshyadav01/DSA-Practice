// Program: Right Rotate Array by One
// Description: Rotates array elements to the right by one position
// Time Complexity: O(n)
#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,5,5,8,9,4};
    int temp,n;
    n= sizeof(arr)/sizeof(arr[0]);
    temp = arr[n-1];
    // Shift every element one position to the right
    for(int i=n-2;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}