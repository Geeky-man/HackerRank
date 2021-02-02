#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a, b,res,ans;
    char word[20];
    cin >> a >> b;
    res = a + b;
    cout << fixed;
    cout << int(res) << endl;
    ans = b + b;
    cout << fixed;
    cout << setprecision(1) << float(ans) << endl;
    cin >> word;
    cout << word <<" is the best place to learn and practice coding!";

    return 0;
}