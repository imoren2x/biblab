/* obj.h */

typedef struct charSetStruct charSet_t;

typedef charSet_t *charSet;

//typedef enum{false, true} bool;


/*
 * The compiler considers struct obj an incomplete type. Incomplete types
 * can be used in declarations.
 */

/**
 * Constructor of the abstract data type
 * char* string with the
 */
charSet_t* newCharSet(char*);

bool extract(charSet_t* , char*);

size_t length(charSet_t*);

bool isEmpty(charSet_t*);

bool isStringAnagram(charSet_t*, char*);

int compare(charSet_t*, charSet_t*);

bool areStringAnagrams(char*, char*);

////////////////////////////////////////
charSet newCharSet(char*);

bool extract(charSet , char*);

size_t length(charSet);

bool isEmpty(charSet);

bool isStringAnagram(charSet, char*);

int compare(charSet, charSet);

bool areStringAnagrams(char*, char*);

////////////////////////////////////////
