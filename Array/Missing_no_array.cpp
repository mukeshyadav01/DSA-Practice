#include<iostream>
using namespace std;
int main()
{
    
    int arr[] ={1,4,5,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int total = n+1;
    int actual = total *(total +1)/2;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int missing=actual - sum;
    cout <<"Missing no is:"<<missing;

}