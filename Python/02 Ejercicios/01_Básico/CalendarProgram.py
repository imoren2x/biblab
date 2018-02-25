

import CalendarModule

def tf1(iYear, iMonth, iDay = 0):
    oCalendar = cCalendar.cCalendar(iYear, iMonth, iDay)
    return oCalendar.sDayOfWeek()

def tf2(iYear):
    oCalendar = cCalendar.cCalendar(iYear)
    return oCalendar.bIsLeapYear()

def tf3(iYear, iMonth):
    oCalendar = cCalendar.cCalendar(iYear, iMonth)
    return oCalendar.vPrintMonth()

if __name__ == "__main__":
    print "Hello World \n"
    print tf1(1981, 1, 27)
    print tf1(2001, 9, 11)
    print tf1(2004, 3, 11)

    print tf2(1981)
    print tf2(2001)
    print tf2(2004)
    print tf2(2000)

    print tf3(1981, 1)
