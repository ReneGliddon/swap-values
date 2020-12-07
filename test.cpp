
#include <iostream>
using namespace std;

template<class T>
void swapValues(T& variable1, T& variable2)
{
	T temp;

	temp = variable1;
	variable1 = variable2;
	variable2 = temp;

}


int main()
{
	int integer1 = 1, integer2 = 2;
	cout << "Original integers are " << integer1 << " and " << integer2;
	swapValues(integer1, integer2);
	cout<<"\nSwapped integer values are " << integer1 << " and " << integer2;

	char symbol1 = 'A', symbol2 = 'B';
	cout << "Original symbolss are " << symbol1 << " and " << symbol2;
	swapValues(symbol1, symbol2);
	cout << "\nSwapped symbol values are " << symbol1 << " and " << symbol2;


    return 0;
}

