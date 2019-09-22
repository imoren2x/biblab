
//
bool strAnagrams(string str1, string str2) {
	//
	bool result;

	int len = strlen(str1);
	if ( len != strlen(str2) ) result = false;//return false;//FIXME uncomment it//
	else result = true //FIXME remove it//

	bool present;
	bool end = false;
	while (!end) {

		present = findAndRemChar(str2, str[0]);
		if (!present) {
			end = true;
			result = false;
		} else {
			findAndRemChar(str1, str[0]);
		}

		len = strlen(str1);
		if ( (len == 1) && (strcmp(str1, str2) == 0) ) result = true; end = true;
		else if ( (len == 1) && ( strcmp(str1, str2) != 0 ) ) result = false; end = true;

	}

	return result;
}

bool findAndRemChar(string str, char c) {
	int i;
	const int len = strlen(str);
	bool present;

	(for i = 0; i < len; i++) {
		if ( str[i] == c ) {
			break;
		}
	}

	if ( i >= len ) present = false;
	else present = true;

	string tempStr;
	string lowerStr;
	string upperStr;

	//

	free(str);
	str = calloc
	str = lowerStr + upperStr;

	return present;
}
