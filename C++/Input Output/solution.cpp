/*Objective
In this challenge, we're practicing reading input from stdin and printing output to stdout.

In C++, you can read a single whitespace-separated token of input using cin, and print output to stdout using cout. For example, let's say we declare the following variables:

string s;
int n;
and we want to use cin to read the input "High 5" from stdin. We can do this with the following code:

cin >> s >> n;*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b,c,res;
    cin>>a;
    cin>>b;
    cin>>c;
    res = a + b + c;
    cout<<res;  
    return 0;
}
