print "Content-type: text/html \n\n"; #HTTP HEADER

#DEFINE SOME HASHES
%coins = ("Quarter", 25, "Dime", 10, "Nickle", 5);
%ages = ("Jerry", 45, "Tom", 22, "Vickie", 38);

#PRINT MY HASHES TO THE BROWSER
print %coins;
print "<br />";
print %ages;