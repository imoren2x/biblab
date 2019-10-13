

Pattern linePatt = Pattern.compile("^([0-9]{2}-[0-9]{2} [0-9]{2}:[0-9]{2}:[0-9]{2})(.*)");

Matcher m = linePatt.matcher(line);//linea de entrada
	m.find();
	if ( !m.matches() ) {
		return true;
	}
	String group1 = m.group(1);//Aqui tengo 10-29 19:54:01
	//Log.w(TAG, "FECHA A PARSEAR: " + group1);
	Pattern datePatt = Pattern.compile("^([0-9]{2})-([0-9]{2}) ([0-9]{2}):([0-9]{2}):([0-9]{2})");
	Matcher m2 = datePatt.matcher(group1);




private boolean lineOld(String line, int[] arrayDate) { 
	Pattern linePatt = Pattern.compile("^([0-9]{2}-[0-9]{2} [0-9]{2}:[0-9]{2}:[0-9]{2})(.*)");
	//...
	boolean result = false;
	if ( line == null) {
		return false;//extreme corner case, it avoids crash on datePatt.matcher(group1);//
	}

	//Log.v(TAG, "Line to PARSE: " + line);

	Matcher m = linePatt.matcher(line);//linea de entrada
	m.find();
	if ( !m.matches() ) {
		return true;
	}
	String group1 = m.group(1);//Aqui tengo 10-29 19:54:01
	//Log.w(TAG, "FECHA A PARSEAR: " + group1);
	Pattern datePatt = Pattern.compile("^([0-9]{2})-([0-9]{2}) ([0-9]{2}):([0-9]{2}):([0-9]{2})");
	Matcher m2 = datePatt.matcher(group1);
	//Log.w(TAG, "m2.groupCount() : " + m2.groupCount() );

	int[] arrayParsed = new int[5];
	//String[] arrayStr = new String[5];

	if ( m2.find() ) {
		for (int i = 0; i < m2.groupCount(); i++ ) {
			arrayParsed[i] = Integer.parseInt(m2.group(i+1));
		}
	}

	if ( dateOld(arrayParsed, arrayDate) ) {
		result = true;
	} else {
		result = false;
	}

	return result;
}