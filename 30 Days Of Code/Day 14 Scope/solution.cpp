#include<iostream>
using namespace std;
int main()
{
    int n,arr[50],diff;
    cout<<"Enter the size of an array:\n";
    cin>>n;
    cout<<"Enter the array elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The max diff is:\n";
    diff = arr[1] - arr[0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j] - arr[i] > diff)
            diff = arr[j] - arr[i];
        }
    }
    cout<<diff;
}