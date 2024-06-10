#include <iostream>
using namespace std;
int main() 
{
    int n,time=0;
    cin >>n;
    double k=0;
    double j=0;
    while(time<n) 
    {
        double t;
        cin >>t;
        if(t>=0) 
        {
            j++;
            k+=t;
        }
        time++;
    }
    cout <<fixed;
    cout.precision(9);
    cout <<k/j;
    return 0;
}
