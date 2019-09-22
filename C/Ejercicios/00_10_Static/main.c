/**
 This Module tests how static class storage type works.

 There are two modules:
	main.c   (Main Module)
        module.c (Other Module)

 When we use gcc
   gcc -o -std=c99 main main.c

 There are essentially four possibilities:
  1. Static function/variable in Main module
    1.1 static int StaticFunctionInMain(int i)
	Visibility: local to Main module
	Utility: useless
    1.2 int FunctionWithStaticVarInMain(int i)
	Visibility: local to Main module
	Duration:   total
	Utility:    keep values in calls

  2. Static function/variable in other module
    2.1 static int StaticFunctionInOther(int i)
	Visibility: local (not visible)
	Utility:    hide functions to other modules
    2.2 int FunctionWithStaticVarInOther(int i)
	Visility:   visible from the main module.
	Duration:   total
	Utility:    keep values in calls.
 *
 */

#ifndef STDLIB
  #define STDLIB
  #include <stdio.h>
  #include <stdlib.h>
#endif
#include "module.c"

#define LIMIT 5

//Local functions to main.c
       int function_1();
static int function_2();
       int function_3();

int main(void) {
  printf("\t Exercise about static functions\n");

  for (int i = 0; i < LIMIT; i++) {
      printf("Iteration %d: \n", i);
      printf("\t Local function, static var:  %d \n", function_1());
      printf("\t Local static function:       %d \n", function_2());
      printf("\t Local function:              %d \n", function_3());

      printf("\t Module function, static var: %d \n", module_function_1());
      printf("\t Module static function:      %d \n", module_function_2());
      printf("\t Module function:             %d \n", module_function_3());
      printf("\n");
  }

	printf("\n");
	//system("pause");
	return EXIT_SUCCESS;
}

/**
 \description Static local variables: variables declared as static
                inside a function are statically allocated while
                having the same scope as automatic local variables.
              Hence whatever values the function puts into its static
                local variables during one call will still be present
                when the function is called again.
 */
int function_1() {
	static int x = 10;
	x++;

	return x;
}

static int function_2() {
	int x = 5;
	x++;

	return x;
}

int function_3() {
	int x = 3;
	x++;
	return x;
}
