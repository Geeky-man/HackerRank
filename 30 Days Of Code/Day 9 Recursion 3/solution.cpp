#include<iostream>
using namespace std;
int factorial(int n);


int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    cout<<factorial(n);
    
}
int factorial(int n)
{
    if(n<=1)
    { 
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
    
}
/*
other logic: (without recursion)
for(int i=1;i<=n;i++){
    fact *= i;
}
*/