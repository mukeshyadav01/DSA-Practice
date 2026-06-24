#include<iostream>
using namespace std;
int main()
{
    int las, pre, cur,n,i;
    las=0;
    pre=1;
    cout<<"Enter the number:";
    cin>>n;
    if(n==0){
        cout<<0;
        return 0;
    }
    else if(n==1)
    {
        cout<<1;
        return 0;
    }
    else 
    {
    for(i=2;i<=n;i++)
    {
        cur=las+pre;
        las=pre;
        pre=cur;
    }
    cout<<cur;
    }
}