#include<iostream>
using namespace std;
char conv(char name)
{
    char ans;
    ans=(name -'a')+'A';
    return ans;
}
int main()
{
    char name,ans;
    cout<<"Enter the alphabet:";
    cin>>name;
    cout<< "converted:"<< conv(name);
}