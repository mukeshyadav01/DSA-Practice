#include<iostream>
using namespace std;
int main()
{
    int i, n, pow,num;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the power";
    cin>>pow;
    num=n;
    for(i=1;i<pow;i++)
    {
        num=num*n ;
    }
    cout<<num;
}