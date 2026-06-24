#include <iostream>
using namespace std;

int Digit(int num)
{
    if(num == 0)
        return 1;

    int count = 0;
    while(num)
    {
        count++;
        num = num / 10;
    }
    return count;
}

bool armstrong(int num, int digit)
{
    int n = num, ans = 0, rem;

    while(n)
    {
        rem = n % 10;

        int power = 1;
        for(int i = 0; i < digit; i++)
        {
            power *= rem;
        }

        ans += power;
        n = n / 10;
    }

    return (ans == num);
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int digit = Digit(num);

    if(armstrong(num, digit))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";
}