#include<iostream>
using namespace std;
main()
{
	int a,b,answer;
	cin >> a;
	cin >> b;
	if ( a < b)
	{
		answer= -(a-b);
	}
	if ( a >= b)
	{
		answer=a-b;
	}
	cout <<answer<<"\n";
}
