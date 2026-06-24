#include<iostream>
using namespace std;
int main()
{
    int n,i ;
    cout<<"enter the number till you want to print:";
    cin>>n;
    i=1; //initialization
    while(i<=n)  //break condition
    {
        cout<<i<<" ";
        i++;  //update
    }
}