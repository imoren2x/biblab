//#include <ansi.h>
#include <stdio.h>
#include <stdlib.h>
#include <TestType.h>
#include <der_encoder.h>
#include <xer_encoder.h>
//#include <ber_decoder.h>

int main(int argc, char *argv[]) {

	TestType_t* pTestType;

	pTestType = (TestType_t*) calloc(1, sizeof(TestType_t));

	pTestType->num = 3;
	//pTestType->str = "hola, caracola";//(UTF8String_t*) calloc(50, sizeof(UTF8String_t));

	/* Print out the structure in XER */
	//der_fprint(stdout, &asn_DEF_TestType, pTestType);
	//der_encode
	xer_fprint(stdout, &asn_DEF_TestType, pTestType);

  system("pause");
  return 0;
}