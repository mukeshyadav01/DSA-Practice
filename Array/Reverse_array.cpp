// Program: Reverse Array
// Description: Reverses the elements of an array in place using two-pointer technique
// Time Complexity: O(n)
#include<iostream>
using namespace std;
int main()
{
    int arr[6]={4,5,6,4,9};
    int start=0, end=4 ;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}