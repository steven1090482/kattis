#include <iostream> 
using namespace std;
int main()
{
	int number_first,new_hunders,new_ten,new_units,answer;
	cin >> number_first;
	new_hunders=number_first%10;
	new_ten=number_first/10%10;
	new_units=number_first/100;
	answer=new_hunders*100+new_ten*10+new_units;
	cout << answer << "\n";
	return 0;
}
