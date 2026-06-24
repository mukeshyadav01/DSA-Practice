#include<iostream>
using namespace std;
int main()
{
    int i, n,sum;
    cout<<"Enter the numbeeer:";
    cin>>n;
    sum=0;
    for(i=n;i>=1;i--)
    {
        sum=sum+i;
    }
    cout<<sum;
}