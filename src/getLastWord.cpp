/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str)
{
	char *result;
	int i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	int j ,k;
	while (str[i] == ' '&&i>=0)
		i--;
	j = i;
	while (i >= 0 && str[i] != ' '){
		i--;
	}
	result = (char*)malloc(sizeof(char)*(j - i+1));
	i++;
	if (str[i] == ' '){
		return "";
	}
	else{
	
		int len = j - i+1;
		for (k = 0; k < len; k++,i++){
			result[k] = str[i];
		}
		result[k] = '\0';
	}
	return result;

}
