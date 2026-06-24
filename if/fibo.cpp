#include<iostream>
using namespace std;
int main()
{
    int n,i,cur;
    int las=0;
    int pre=1;
    cout<<"Enter the number";
    cin>>n;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<"0"<<" ";
        }
        else if (i==1)
        {
            cout<<"1"<<" ";
        }
        else{
            cur=las+pre;
            cout<<cur<<" ";
            las=pre;
            pre=cur;


        }
    }
}