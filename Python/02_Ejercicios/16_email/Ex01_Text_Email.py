#!/usr/bin/python
#-*- coding: latin-1 -*-

"""
"""


import smtplib


def main():
    """
    """
    sender = 'name@domain.com'
    receivers = ['id@domain.com']

    message = \
    """
    From: Name Surname <name@domain.com>
    To: Name Surname <name@domain.com>
    Subject: Farewell

    This is a test e-mail message.
    """

    #host = 'localhost'
    host = "smtp.domain.com"
    port = 25

    user        = 'name@domain.com'
    password    = "password"

    try:
        smtpObj = smtplib.SMTP(host, port)
        smtpObj.login(user, password)
        smtpObj.sendmail(sender, receivers, message)
        print "Successfully sent email"
    except Exception, e:  # smtplib.SMTPException:
        print "Error: unable to send email"
        raise Exception(e)


if __name__ == '__main__':
    main()

"""
http://www.tutorialspoint.com/python/python_sending_email.htm
http://docs.python.org/2/library/smtplib.html
http://docs.python.org/2/library/email-examples.html
"""
