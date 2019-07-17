#!/usr/bin/perl

print "content-type: text/html \n\n";

#
# Next Place it inside your loop and it will stop the current iteration and go on to the next one.
# Continue Executed after each loop iteration and before the conditional statement is evaluated. A good place to increment counters.
# Last Last stops the looping immediately (like break)
# Redo Redo will execute the same iteration over again.
#

# SET A VARIABLE
$count = 0;
while ($count <= 7) {
		
	# SET A CONDITIONAL STATEMENT TO INTERRUPT @ 4
	if ($count == 4) {
		print "Skip Four!\n";
		next;
	}
	# PRINT THE COUNTER
	print $count."\n";

}
	continue {
		$count++;
	};
print "Loop Finished!";