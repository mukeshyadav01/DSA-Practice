#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // create vector, declare
    // vector<int>v;
    // vector<int>v1(5,1);
    // // Size and capacity
    // cout<<"size of vector:"<<v.size()<<endl;
    // cout<<"Capacity of vector:"<<v.capacity()<<endl;
    // v.push_back(3);
    // v.push_back(5);
    // v.push_back(5);
    // cout<<"size of vector:"<<v.size()<<endl;
    // cout<<"Capacity of vector:"<<v.capacity()<<endl;
    // // Update value
    // v[1]=8;
    // cout<<"size of vector:"<<v1.size()<<endl;
    // cout<<"Capacity of vector:"<<v1.capacity()<<endl;
    // v1.push_back(8);
    // cout<<"size of vector:"<<v1.size()<<endl;
    // cout<<"Capacity of vector:"<<v1.capacity()<<endl;
    
    // vector<int>v3 = {3,2,63,23};
    // cout<<"size of vector:"<<v3.size()<<endl;
    // cout<<"Capacity of vector:"<<v3.capacity()<<endl;

    // Delete value from vector
    // vector<int>v2;
    // v2.push_back(33);
    // v2.push_back(54);
    // v2.push_back(21);
    // v2.push_back(64);
    // v2.push_back(3);
    // v2.pop_back();
    // cout<<"size of vector2:"<<v2.size()<<endl;
    // cout<<"Capacity of vector2:"<<v2.capacity()<<endl;
    // v2.erase(v2.begin()+1);
    // cout<<"size of vector2:"<<v2.size()<<endl;
    // cout<<"Capacity of vector2:"<<v2.capacity()<<endl; 
    // for(int i = 0 ;i<v2.size();i++) 
    // {
    //     cout<<v2[i]<<" ";
    // }
    // v2.insert(v2.begin()+1,69); // Insert value
    // cout<<endl;
    // for(int i = 0 ;i<v2.size();i++) 
    // {
    //     cout<<v2[i]<<" ";
    // }

    // // Clear all elements
    // v2.clear();
    // cout<<endl; 
    // cout<<"size of vector2:"<<v2.size()<<endl;
    // cout<<"Capacity of vector2:"<<v2.capacity()<<endl; 
    // vector<int>arr;
    // arr.push_back(3);
    // arr.push_back(12);
    // arr.push_back(43);
    // arr.push_back(7);
    // // cout<<arr[0]<<endl;
    // // cout<<arr.front()<<endl;
    // // cout<<arr[arr.size()-1]<<endl;
    // // cout<<arr.back()<<endl;
    // vector<int>a;
    // //copy of vector 1 to another vector
    // a=arr;
    // // cout<<a.size();
    // for(auto it = arr.begin();it!=arr.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // for(auto i:arr)
    // cout<<i<<" ";
    vector<int>ans;
    ans.push_back(5);
    ans.push_back(89);
    ans.push_back(8);
    ans.push_back(56);
    ans.push_back(34);
    //sort in increasing order
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    //sort in decreasing order
    // sort(ans.begin(),ans.end(),greater<int>());
    // for(int i=0;i<ans.size();i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;

    // search in binary search
    cout<<binary_search(ans.begin(),ans.end(),3)<<endl;
    cout<<find(ans.begin(),ans.end(),56)-ans.begin()<<endl;
}