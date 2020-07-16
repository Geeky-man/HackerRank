/*A for loop is a programming language statement which allows code to be repeatedly executed.

The syntax for this is

for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
expression_1 is used for intializing variables which are generally used for controlling terminating flag for the loop.
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
expression_3 is generally used to update the flags/variables.
A sample loop will be

for(int i = 0; i < 10; i++) {
    ...
}*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int num1,num2;
cin >> num1 >> num2;
string Arr1[9] = {"one","two","three","four","five","six","seven","eight","nine"};
for(int i =num1; i <= num2;i++)
{
if(i <= 9)
{
cout << Arr1[i-1] << endl;
}
else
{
if(i%2 ==0)
{
cout << "even" << endl;
}
else
{
cout << "odd" << endl;
}
}
}
return 0;
}
