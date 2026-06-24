//  Print:-   a b c d e
//            a b c d e 
//            a b c d e 
//            a b c d e
//            a b c d e 
#include<iostream>
using namespace std;
int main()
{
    int row;
    char col;
    for(row=1;row<=5;row++)
    {
        for(col='a';col<='e';col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}