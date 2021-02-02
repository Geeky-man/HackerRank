// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=3;
//     int returned[50],due[50];
   
//     for(int i=0;i<n;i++)
//     {
//         cin>>returned[i];
//     }

//      for(int i=0;i<n;i++)
//     {
//         cin>>due[i];
//     }
    
//     if(due[0] >= returned[0])
//     {
//         if(due[1] >= returned[1])
//         {
//             if(due[2] >= returned[2])
//             {
//                 cout<<"0";
//             }
//         }
//     }

//     if(returned[0] > due[0])
//     {
//         if(returned[1] == due[1])
//         {
//         int days = returned[0] - due[0];
//         cout<<days * 15;
//         }
//     }
//     if (returned[1] > due[1])
//     {
//         if(returned[2] == due[2])
//         {
//         int months = returned[1] - due[1];
//         cout<< months * 500;
//         }
//     }
//     if(returned[2] > due[2])
//     {
//         cout<<"10000 Hackos";
//     }
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int r_dd, r_mm, r_yy;
    int d_dd, d_mm, d_yy;
    
    cin >> r_dd >> r_mm >> r_yy >> d_dd >> d_mm >> d_yy;
    
    if ( r_yy > d_yy ) {
        cout << 10000;
    } else if ( r_yy == d_yy ) {
        if ( r_mm > d_mm ) {
            cout << ((r_mm - d_mm) * 500);
        } else if ( r_mm == d_mm ) {
            if ( r_dd > d_dd ) {
                cout << ((r_dd - d_dd) * 15);
            } else {
                cout << 0;
            }
        } else {
            cout << 0;
        }
    } else {
        cout << 0;
    }

    return 0;
}