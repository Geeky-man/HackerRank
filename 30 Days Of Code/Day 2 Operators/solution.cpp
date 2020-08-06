#include<iostream>
#include<iomanip> 
using namespace std;
int main()
{
    //double tip,tax,totalCost;
    double cost,tipp,taxp;
    cin>>cost;
    cin>>tipp;
    cin>>taxp;

    double tip = cost * tipp/100;
    cout<<tip<<endl;
    double tax = cost * (taxp/100);
    cout<<tax<<endl;
    double totalCost = cost + tip + tax;
    cout<<totalCost<<endl;

    cout<<setprecision(2)<<totalCost;
    return 0;
}
