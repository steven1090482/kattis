#include <iostream> 
using namespace std; 
int main() 
{
	int n=25,f=2,time=0;
	while (time<n)
	{
		f=f*2+1;
		time++;
	}
	cout <<f;
	return 0;
}
