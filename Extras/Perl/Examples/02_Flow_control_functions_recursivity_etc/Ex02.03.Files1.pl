#!/usr/bin/perl

use Fcntl;

print "content-type: text/html \n\n"; #The header

# Create:Checks to see if the file exists, if not, perl creates a new file.
# Append:Sets the pointer to the end of the file, all output following will be added onto the tail end of the file.
# Truncate:Overwrites your existing file with a new one, this means all data in the old file will be lost.

# Shorthand Flags:
# Entities	Definition
# < or r	Read Only Access
# > or w	Creates, Writes, and Truncates
# >> or a	Writes, Appends, and Creates
# +< or r+	Reads and Writes
# +> or w+	Reads, Writes, Creates, and Truncates
# +>> or a+	Reads, Writes, Appends, and Creates
# O_ Flags:
# Value	Definition
# O_RDWR	Read and Write
# O_RDONLY	Read Only
# O_WRONLY	Write Only
# O_CREAT	Create the file
# O_APPEND	Append the file
# O_TRUNC	Truncate the file
# O_EXCL	Stops if file already exists
# O_NONBLOCK	Non-Blocking usability

# $FilePath = "home/html/myhtml.html"
# sysopen(HANDLE, $FilePath, O_RDWR);
# printf HANDLE "Welcome to Tizag!";
# close (HANDLE);

$filepath = "myhtml.html";

sysopen (HTML, $filepath, O_RDWR|O_EXCL|O_CREAT, 0755) or die "$filepath cannot be opened.";
# open FILEHANDLE, MODE, EXPR
# open HTML, ">", $filepath or die $!;
printf HTML "<html>\n";
printf HTML "<head>\n";
printf HTML "<title>My Home Page</title>";
printf HTML "</head>\n";
printf HTML "<body>\n";
printf HTML "<p align='center'>Here we have an HTML
page with a paragraph.</p>";
printf HTML "</body>\n";
printf HTML "</html>\n";
close (HTML);