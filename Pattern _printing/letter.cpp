#include<iostream>
using namespace std;
int main()
{
    int row; char name;
    int col;
  for(row=1;row<=5;row++)
    {
        name='a'+(row-1);
      for(col=1;col<=row;col++)
      {
        cout<<name<<" ";
      }
      cout<<endl;
    }
}