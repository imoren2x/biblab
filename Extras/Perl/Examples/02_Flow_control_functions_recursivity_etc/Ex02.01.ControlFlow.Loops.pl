http://www.tutorialspoint.com/perl/perl_loops.htm

Loop Type	Description

while loop	Repeats a statement or group of statements while a given condition is true. It tests the condition before executing the loop body.

until loop	Repeats a statement or group of statements until a given condition becomes true. It tests the condition before executing the loop body.

for loop	Execute a sequence of statements multiple times and abbreviates the code that manages the loop variable.

foreach loop	The foreach loop iterates over a normal list value and sets the variable VAR to be each element of the list in turn.

do...while loop	Like a while statement, except that it tests the condition at the end of the loop body

nested loops	You can use one or more loop inside any another while, for or do..while loop.

Control Statement	Description
next statement	Causes the loop to skip the remainder of its body and immediately retest its condition prior to reiterating.
last statement	Terminates the loop statement and transfers execution to the statement immediately following the loop.
continue statement	A continue BLOCK, it is always executed just before the conditional is about to be evaluated again.
redo statement	The redo command restarts the loop block without evaluating the conditional again. The continue block, if any, is not executed.
goto statement	Perl supports a goto command with three forms: goto label, goto expr, and goto &name.

INFINITE LOOP

#!/usr/local/bin/perl

for( ; ; )
{
   printf "This loop will run forever.\n";
}