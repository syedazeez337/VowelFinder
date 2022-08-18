// This checks if a given Alphabet is an English vowel or a consonant

#include <stdio.h>
#include <ctype.h>

int main()
{
	char c;
	int lowercaseVowel, uppercaseVowel;
	printf("Enter an English Alphabet: \n");
	scanf_s("%c", &c);

	//Evaluates true(1) if the variable c is a lowercase vowel
	lowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

	//Evaluates true(1) if the variable c is a uppercase vowel
	uppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	if (!isalpha(c))
		printf("Error!! Not an Alphabet\n");
	else if	(lowercaseVowel || uppercaseVowel)
		printf("%c is a vowel\n", c);
	else
		printf("%c is a consonant\n", c);
	return 0;
}