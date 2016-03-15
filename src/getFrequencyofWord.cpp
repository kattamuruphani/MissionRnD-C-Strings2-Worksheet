/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>


int count_word_in_str_way_1(char *str, char *word)
{
	int i, length;
	int count = 0,j=0;
	if (str == NULL || str[0] == '\0')
		return 0;
	if (word == NULL || word[0] == '\0')
		return 0;
	int k = 0;
	for (k = 0; str[k] != '\0';k++)
	{

		i = k;
		for (j = 0; word[j] == str[i]&&word[j]!='\0'; i++, j++);
		if (word[j] == '\0')
			count++;
		else
			i++;

	}
	return count;
}

int are_equal_recursion(char str1[], char str2[], int length)
{
	if (str2[0] == '\0')
		return 0;
	else if (str1[0] != str2[0])
		return -length;
	else
		return 1 + are_equal_recursion(str1 + 1, str2 + 1, length + 1);
}
int count_word_int_str_way_2_recursion(char *str, char *word){
	int length;
	if (str[0] == '\0' || str == NULL)
		return 0;
	length = are_equal_recursion(str, word, 0);
	if (length)
	{
		return 1 + count_word_int_str_way_2_recursion(str + 1, word);
	}
	else
	{
		return count_word_int_str_way_2_recursion(str + 1, word);
	}
}
