#!/usr/bin/expect -f

spawn git push origin master
expect -exact "Username for 'https://example.com':"
send -- "im\r"
expect -- "Password for 'https://example.com':"
send -- "ThisIsMyPassw0rd\$\r"
interact

