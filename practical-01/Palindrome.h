#pragma once

class Palindrome
{
public:
	Palindrome(char const* phraseIn);
	char const* phrase;

private:
	void removeNonLetters();
	void lowerCase();
	bool isPalindrome();
};

