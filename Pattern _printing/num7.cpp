#include<iostream>
using namespace std;
int main()
{
    int row, col;
    // for(row=5;row>=1;row--)
    // {
    //     for(col=1;col<=row;col++)
    //     {
    //         cout<<col<<" ";

    //     }
    //     cout<<endl;
    // }
    for(row=1;row<=5;row++)
    {
        for(col=1;col<= 5-(row-1);col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}