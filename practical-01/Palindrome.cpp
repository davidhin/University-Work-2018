#include "Palindrome.h"
#include <cstring>
#include <string>
#include <iostream>

Palindrome::Palindrome(char* phraseIn)
{
	phrase = phraseIn;
}

void Palindrome::removeNonLetters()
{
	char temp[strlen(phrase)+1];

	// Create temp array storing modified string
	int i = 0, j = 0;
	while (phrase[i])
	{
		if (isalpha(phrase[i]))
		{
			temp[j] = phrase[i];
			j++;
		}
		i++;
	}
	phraseLen = j; // new length of phrase

	// Replace original phrase
	i = 0;
	while (phrase[i])
	{
		phrase[i] = temp[i];
		i++;
	}	
}

void Palindrome::lowerCase()
{
	int i = 0;
	while (phrase[i])
	{
		phrase[i] = tolower(phrase[i]);
		i++;
	}
}

bool Palindrome::isPalindrome()
{
	removeNonLetters();
	lowerCase();

	if (phraseLen == 0) return 0; // If phrase is empty, not a palindrome
	for (int i = 0; i < phraseLen / 2; i++)
		if (phrase[i] != phrase[phraseLen-i-1])
			return 0;

	return 1;
}
