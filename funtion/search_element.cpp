#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,3,44,55,95};
    int x;
    cout<<"Enter the value you want to find in array";
    cin>>x;
    int size = sizeof(arr) / sizeof(arr[0]);
        for( int i=0;i<size;i++)
        {
        if(arr[i]==x)
        {
            cout<<"index is:"<<i;
            return 0;
        }
        }
       cout<<"not present in array";
    
}