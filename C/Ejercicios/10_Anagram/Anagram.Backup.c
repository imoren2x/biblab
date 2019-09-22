#include <stdio.h>
#include <stdlib.h>
#include <string.h> //for strlen

#define WORD_LEN 100

typedef enum {false, true} bool;


bool wordsAreAnagrams(char* word1, char* word2);

bool findAndExtractChar( char** pword, char* charToFind);

int main (int argn, char* argv[]) {
	//
	bool areAnagram;
	char* word1;
	char* word2;

	if (argn == 0) {
		printf("Please, tell me the first word: \n >> ");
		word1 = (char*) malloc(WORD_LEN*sizeof(char));
		scanf("%s", word1);
		printf("Word 1: %s", word1);

		printf("\n\nNow, tell me the second word: \n >> ");
		word2 = (char*) malloc(WORD_LEN*sizeof(char));
		scanf("%s", word2);
		printf("Word 2: %s", word2);
		// char *word2 = word1;
		// bool found;
	} else if (argn == 3) {
		word1 = argv[1];
		word2 = argv[2];
	}

	//Normalization, make words lower case//
	//FIXME

	if ( strlen(word1) == strlen(word2) ) {
		areAnagram = wordsAreAnagrams(word1, word2);
		////FUNCTION UNDER TEST//
		// printf("\n\nFunction under Test: begin");
		// found = findAndExtractChar(&word1, "h");

		// (found == true) ? (printf("\n found = true")) : printf("\n found = false");
		// printf("\n word = %s", word1);
		// printf("\n\nFunction under Test: end");
		////////////////////
	} else {
		printf("\n\nWords have not the same length, so they cannot be anagrams.\n\n");
	}

	if (areAnagram) {
		printf("\n\nTHEY ARE ANAGRAMS.");
	} else {
		printf("\n\nTHEY ARE NOT ANAGRAMS.");
	}

	return 0;

}

/**
 * main function to detect if two words are anagrams or not.
 * @param word1 first word.
 * @param word2 second word.
 * @return boolean value: true iff the words are anagrams; false iff the words are not anagrams.
 */
bool wordsAreAnagrams(char* word1, char* word2) {
	bool end = false;
	bool present;
	bool anagram = false;//FIXME remove initialization//
	int i = 0;

	while (!end) {

		if ( strcmp(word1, word2) == 0 ) {
			return true;
		}

		if ( ( strlen(word1) == strlen(word2)) && (strlen(word1) == 1) ) {
			if ( strcmp(word1, word2) == 0 ) {
				return true;
			}
		}

		char *charToFind = (char*) calloc(2, sizeof(char));//&word1[i];
		//strncpy(charToFind, &word1[i], 1);
		strncpy(charToFind, &word1[0], 1);
		printf("\n\n--------------------");
		printf("\n[wordsAreAnagrams]Character: %s", charToFind);

		present = findAndExtractChar(&word2, charToFind);
		printf("\n[wordsAreAnagrams]word2 = %s", word2);
		if (!present) {
			end = true; //character charToFind not present, not anagrams//
			anagram = false;
		} else {
			//if character present, remove it from initial word//
			printf("\n[wordsAreAnagrams]Extract char from original word.");
			findAndExtractChar(&word1, charToFind);
			printf("\n[wordsAreAnagrams]word1 = %s", word1);
		}
		i++;
	}
	return anagram;
}


/**
 * It searchs a character in a string, which should be passed
 *  as a referenced argument.
 * @param pword string (as pointer to char) which must be passed by reference.
 * @param charToFind string to be searched in the string
 * @return boolean value: true iff the character is found and extracted; false if the character is not present in the string.
 *
 */
bool findAndExtractChar( char** pword, char* charToFind) {
	bool found;
	int len = strlen((char*) *pword); //casting is crucial//
	int i;
	char* tempWord;// = (char*) malloc( (len - 1) * sizeof(char));
	char* auxWord2;
	char* auxWord1;
	char* auxChar1;

	char *upperWord, *lowerWord;
	char *concatWord;

	printf("\n *pword = %s", *pword);
	printf("\n charToFind = %s", charToFind);
	printf("\n len = %d", len);

	if ( len == 1 ) {
		if ( strcmp(*pword, charToFind) == 0 ) {
			free(*pword);
			return true;
		} else {
			return false;
		}
	}

	for (i = 0; i <= (len - 1); i++) {
		printf("\n");
		auxWord1 = *pword;
		printf("\n %d: *pword[%d] = %c / %s", i, i, auxWord1[i], charToFind);

		//auxChar1 = (char*) malloc(2 * sizeof(char));
		auxChar1 = (char*) calloc(2, sizeof(char));
		strncpy(auxChar1, &auxWord1[i], 1);
		//auxChar1[1] = '\0';
		printf("\n auxChar1 = %s", auxChar1);
		if ( strcmp( auxChar1, charToFind ) == 0) {
			//if ( auxWord1[i] == *charToFind ) {//if ( strcmp( (char * ) auxWord1[i], charToFind) == 0) {//if ( strcmp( (char * ) *pword[i], charToFind) == 0) {//( *pword[i] == *charToFind ) {
			printf("\n The character is found.");
			found = true;
			break;
		}
	}

	if ( (found) && (i < len) ) {
		if ( i == 0) {
			//at the beginning//
			printf("\n Copying the sub-string (in the begin).");
			//printf("\n *pword[1] = %s", pword[2]);
			tempWord = (char*) calloc( len, sizeof(char));
			auxWord2 = (char *) auxWord1;//where auxWord1 points
			auxWord2 = &auxWord2[1];//auxWord2 = (auxWord2 + 1);
			//copy sub-string//
			strncpy( (char *) tempWord, (char*) auxWord2, len - 1);
			printf("\n *tempWord = %s", tempWord);
			free(auxWord1);//Free the original word//
			*pword = (char*) calloc(len, sizeof(char));//memory again
			auxWord1 = *pword;
			strcpy( (char *) auxWord1, (char*) tempWord);
			printf("\n *pword = %s", *pword);
			printf("\n Copying the sub-string: end.");
		} else if (i == (len - 1) ) {
			//and the end//
			printf("\n Copying the sub-string (in the end).");
			//printf("\n *pword[1] = %s", pword[2]);
			tempWord = (char*) calloc( len, sizeof(char) );//len - 1 + '\0'
			//copy sub-string//
			strncpy( (char *) tempWord, auxWord1, len - 1);
			free(auxWord1);
			*pword = (char*) calloc(len, sizeof(char));//memory again
			auxWord1 = *pword;
			strcpy( (char *) auxWord1, (char*) tempWord);
			printf("\n *pword = %s", *pword);
			printf("\n Copying the sub-string: end.");
		} else {
			//nor the beginning nor the end//
			printf("\n Copying the sub-string (in the end).");
			printf("\n LowerWord.");
			lowerWord = (char*) calloc( i + 1, sizeof(char) );//i - 1 + '\0'
			auxWord2 = (char *) auxWord1;//where auxWord1 points
			//copy sub-string//
			strncpy( (char *) lowerWord, (char*) auxWord2, i - 1 + 1);
			printf("\n *lowerWord = %s", lowerWord);

			//
			printf("\n UpperWord.");
			upperWord = (char*) calloc( len - i + 1, sizeof(char) );//len - 1 + '\0'
			auxWord2 = &auxWord2[i+1];
			//copy sub-string//
			strncpy( (char *) upperWord, auxWord2, len - i + 1);
			printf("\n *upperWord = %s", upperWord);
			concatWord = (char*) calloc(len + 1, sizeof(char));
			strcat(concatWord, lowerWord);
			strcat(concatWord, upperWord);
			printf("\n concatWord = %s", concatWord);
			free(auxWord1);
			*pword = (char*) calloc(len, sizeof(char));//memory again
			auxWord1 = *pword;
			strcpy( (char *) auxWord1, (char*) concatWord);
			printf("\n concatWord = %s", auxWord1);
			// strcpy(concatWord, lowerWord);
			// printf("\n concatWord = %s", concatWord);
			// concatWord = strcat(concatWord, upperWord);
			// printf("\n concatWord = $s", concatWord);
		}

	} else {
		found = false;
	}

	return found;
}