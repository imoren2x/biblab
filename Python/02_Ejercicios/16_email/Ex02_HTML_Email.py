#!/usr/bin/python
#-*- coding: latin-1 -*-

"""
"""

import smtplib


def main():
    """
    """
    message = """From: From Person <from@fromdomain.com>
    To: To Person <to@todomain.com>
    MIME-Version: 1.0
    Content-type: text/html
    Subject: SMTP HTML e-mail test

    This is an e-mail message to be sent in HTML format

    <b>This is HTML message.</b>
    <h1>This is headline.</h1>
    """

    try:
       smtpObj = smtplib.SMTP('localhost')
       smtpObj.sendmail(sender, receivers, message)
       print "Successfully sent email"
    except smtplib.SMTPException:
       print "Error: unable to send email"


if __name__ == '__main__':
    main()

"""
http://www.tutorialspoint.com/python/python_sending_email.htm
http://docs.python.org/2/library/smtplib.html
http://docs.python.org/2/library/email-examples.html
"""
