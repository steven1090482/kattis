#include<iostream>
using namespace std;
main(){
    int a1,b1,a2,b2,a3,b3;
    cin >> a1 >>b1 >>a2>>b2>>a3>>b3;
    if (a1==a2)
        cout<<a3;
    else if (a1==a3)
        cout<<a2;
    else if (a2==a3)
        cout<<a1;
    cout <<" ";
    if (b1==b2)
        cout<<b3;
    else if (b1==b3)
        cout<<b2;
    else if (b2==b3)
        cout<<b1;
  return 0;
}
