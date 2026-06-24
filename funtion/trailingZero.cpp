#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);   // size n ka vector

    for(int i = 0; i < n; i++)
    {
    cin >> arr[i];
    }
    for(int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
}

}