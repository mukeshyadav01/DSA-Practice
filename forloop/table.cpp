#include<iostream>
using namespace std;
int main()
{
    int i ,n ;
    cout<<"please enter the number ";
    cin>>n;
    // for (i=1;i<=10;i++)
    // {
    //     cout<<n<<"*"<<i <<"="<<n*i<<endl;
    // }
    for (i=n;i<=n*10;i=i+n)
    {
        cout<<i<<" ";
    }
}