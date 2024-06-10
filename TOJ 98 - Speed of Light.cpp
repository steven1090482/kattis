#include <iostream> 
using namespace std;
int main()
{
	long long ls=299792458;
	cout << "1 Light-second(LS) is "<<ls<<" metres.\n";
	cout << "1 Light-minute(LM) is "<<ls*60<<" metres.\n";
	cout << "1 Light-hour(LH) is "<<ls*60*60<<" metres.\n";
	cout << "1 Light-day(LD) is "<<ls*60*24*60<<" metres.\n";
	cout << "1 Light-week(LW) is "<<ls*60*60*24*7<<" metres.\n";
	cout << "1 Light-year(LY) is "<<ls*60*60*24*365<<" metres.\n";
	return 0;
}
