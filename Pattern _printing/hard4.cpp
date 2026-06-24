#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    char name;
    cout<<"Enter the number:";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=(n-row);col++)
        {
            cout<<" "<<" ";
        }
        
    //     for(col=1;col<=row;col++)
    // {
    //     name='A' +(col-1);
    //     cout<<name<<" ";
    // }
    for(name='A';name<='A'+(row-1);name++)
    {
        cout<<name<<" ";
    }
    cout <<endl;
    }
}