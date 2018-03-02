#pragma once

class Palindrome
{
public:
	Palindrome(char* phraseIn);
	char* phrase;
	int phraseLen;
	bool isPalindrome();

private:
	void removeNonLetters();
	void lowerCase();
};


