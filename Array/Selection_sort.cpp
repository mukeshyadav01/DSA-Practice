// Program : Selection Sort
// Description : Sorts an array in Ascending order using selection sort
// Time Complexity : O(n^2)
#include<iostream>
using namespace std;
int main()
{
    int arr[6]={4,8,9,11,7,4};
    // Selection Sort
    for(int i=0;i<5;i++)
    {
        int index =i;
        for(int j=i+1;j<=5;j++)
        {
            if(arr[j]<arr[index])
            index =j;
        }
        swap(arr[i],arr[index]);
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
}