#!/usr/bin/perl
####D:\Perl\bin\perl

#CREATE STRINGS WITH ESCAPING CHARACTERS
$string = "David paid \$4.34 for Larry\'s shirt.\n";
$email = "youremail\@youremail.com\n";

#PRINT THE STRINGS
print "$string";
print "$email";
print '$string and $email';

=begin comment
Escape sequence	Meaning
\\	Backslash
\'	Single quote
\"	Double quote
\a	Alert or bell
\b	Backspace
\f	Form feed
\n	Newline
\r	Carriage return
\t	Horizontal tab
\v	Vertical tab
\0nn	Creates Octal formatted numbers
\xnn	Creates Hexideciamal formatted numbers
\cX	Control characters, x may be any character
\u	Force next character to uppercase
\l	Force next character to lowercase
\U	Force all following characters to uppercase
\L	Force all following characters to lowercase
\Q	Backslash all following non-alphanumeric characters
\E	End \U, \L, or \Q
=cut