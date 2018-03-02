#include <iostream>
#include "Palindrome.h"

int main()
{
	char const* myPhrase = "Glenelg";
	Palindrome myPalindrome(myPhrase); 

	std::cout << myPhrase << std::endl;
}
