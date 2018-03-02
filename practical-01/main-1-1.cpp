#include <iostream>
#include <string>
#include "Palindrome.h"

int main()
{
	
	char str[80];
	std::cin.getline(str, 80);

	Palindrome myPalindrome(str); 
	std::cout << myPalindrome.isPalindrome() << std::endl;
}

// Test Cases:
// Input: A                    | Expected: Yes
// Input: Fun                  | Expected: No
// Input:                      | Expected: No
// Input: Race fast, safe car. | Expected: Yes
// Input: 2Bob				   | Expected: Yes				
// Input: aaa				   | Expected: Yes
// Input: """###               | Expected: No
