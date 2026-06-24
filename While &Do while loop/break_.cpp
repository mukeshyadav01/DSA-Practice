// print 1 to n ,but break loop if 7 is come 
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the number:";
    cin>>n;
    i=1;
    while(i<=n)
    {
        
        if(i==7)
        break;
        cout<<i<<" ";
        i++;
    }

}