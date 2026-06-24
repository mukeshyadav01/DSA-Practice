#include<iostream>
using namespace std;
int main()
{
    int i ,n;
    cout<<"Enter the value:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i==4)
        continue;
        cout<<i<<" ";
        
    }
}