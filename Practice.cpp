#include "Practice.h"
#include <string>
#include <algorithm>
#include <ctype.h>

using std::string;

// Receive three integers and rearrange their values so that they are in
// descending order from greatest (first) to least (third)
bool Practice::sortDescending(int & first, int & second, int & third)
{
	int arr[3] = {first, second, third};
	std::sort(arr, arr + 3, std::greater<int>());
	first = arr[0];
	second = arr[1];
	third = arr[2];
	return true;
	return false; // :P
}

bool Practice::isPalindrome(string input)
{
	for(unsigned int i=0; i < input.size(); i++)
		input[i] = tolower(input[i]);
	for(unsigned int i=0; i < input.size()/2; i++)
	{
		if( input[i] != input[input.size()-1-i] )
			return false;
	}
	return true;
}
