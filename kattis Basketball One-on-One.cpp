#include <iostream>
using namespace std;
int main()
{
    int ans=0,ans2=0,c,time=0;
    string a,b;
    cin >>a;
    for(int i=0;i<a.size();i++) 
    {
        if(a[i]=='A')
        {
            if (a[i+1]==49)
            {
                ans+=a[i+1]-48;
            }
            if (a[i+1]==50)
            {
                ans+=a[i+1]-48;
            }
        } 
        if(a[i]=='B')
        {
            if (a[i+1]==49)
            {
                ans2+=a[i+1]-48;
            }
            if (a[i+1]==50)
            {
                ans2+=a[i+1]-48;
            }
        } 
    }
    if (ans==11 && ans>ans2 && time==0)
    {
        cout <<"A";
        time++;
    }
    if (ans2==11 && ans2>ans && time==0)
    {
        cout <<"B";
        time++;
    }
    if (ans-ans2>=2 && ans>=11 && time==0)
    {
        cout <<"A";
        time++;
    }
    if (ans2-ans>=2 && ans2>=11 && time==0)
    { 
        cout <<"B";
        time++;
    }
    return 0;
}
