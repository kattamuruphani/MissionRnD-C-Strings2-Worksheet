/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>
#include<stdlib.h>
int len(char *str);
void start_count(char a, int *consonants, int *vowels);
void recur_count(char *str, int *consonants, int *vowels, int i, int j);


void count_vowels_and_consonants(char *str,int *consonants, int *vowels)
{
	if (str == NULL){
		*consonants = 0;
		*vowels = 0;
		

	}

	else if (str[0] == '\0'||str == NULL){
		*consonants = 0;
		*vowels = 0;
	}
	else{
		int i, con=0, vow=0;
		for (i = 0; str[i] != '\0'; i++){
			if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
				str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ){
				vow++;
			}
			else if ((str[i] >= 65 && str[i] <= 91) || (str[i] >= 97 && str[i] <= 122)){
				con++;
			}
		}
		*vowels = vow;
		*consonants = con;
	}
}

