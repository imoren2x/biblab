#!/usr/bin/perl

#print "content-type: text/html \n\n"; #HTTP HEADER

$hourlyrate = 7.50; #DECIMAL TO BE RID OF
$hoursworked = 35;
$no_decimal_rate = ($hourlyrate * 100);

$netpay = ($no_decimal_rate * $hoursworked);
$paycheck = ($netpay / 100);

print "Hourly Wage: $hourlyrate\n";
print "Hours: $hoursworked\n";
print "No Decimal: $no_decimal_rate\n";
print "Net Pay: $netpay\n";
print "Pay Check: $paycheck\n";