#include <iostream>
#include "Dice.h"

using namespace std;

int main() {
	RNG roll;
	
	// Examples of how to use:
	cout << "Rolling 1d6:      " << roll.dice(1, 6) << endl;
	cout << "Rolling 5d6:      " << roll.dice(5, 6) << endl;
	cout << "Rolling 8d12:     " << roll.dice(8, 12) << endl;
	cout << "Rolling 1d20:     " << roll.dice(1, 20) << endl;
	cout << "Rolling 8d100:    " << roll.dice(8, 100) << endl;
	cout << "Rolling 1-12,000: " << roll.random(1, 12'000) << endl;

	return 0;
}
