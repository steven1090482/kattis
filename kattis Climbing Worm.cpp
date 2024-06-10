#include<iostream>
using namespace std;
main(){
    int a,b,c,ct,dt=0;
    cin >>a >>b >> c;
    while(1){
        ct++;
        dt+=a;
        if(dt>=c) break;
        dt-=b;
    }
    cout<<ct<<endl;
  return 0;
}
