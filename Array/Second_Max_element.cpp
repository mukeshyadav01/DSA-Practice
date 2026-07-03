// Program: Second Largest Element
// Description: Finds the second largest distinct element in an array
// Time Complexity: O(n)
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={4,8,9,11,15,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans=INT_MIN;
    for(int i=0;i< n ; i++)
    {
        if(arr[i]>ans)
        ans=arr[i];
    }
    int second= INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(ans != arr[i])
        second = max(arr[i],second);
    }
    cout<<second;
}