#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp;
    cin>>n;
    int array[n];
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    
    j=i-1;
    i=0;

    while (i<j)
    {
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
        i++;
        j--;
    }
    

    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}