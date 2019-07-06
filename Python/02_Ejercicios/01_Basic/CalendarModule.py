


class Calendar:
    """Calendar class"""
    def __init__(self, iYear, iMonth = 0, iDay = 0, iColumns = 0):
        self._iYear = iYear
        self._iMonth = iMonth
        self._iDay = iDay
        self._iColumns = iColumns
        
    def iGetYear(self):
        return self._iYear
    
    def iGetMonth(self):
        return self._iMonth
    
    def iGetDay(self):
        return self._iDay
    
    def sDayOfWeek(self):
        """Returns day of the week taking the date as argument
            @rtype string = {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday}
        """
        k1 = 700
        if self._iMonth <= 2:
            ka = self._iMonth + 10
            kb = (self._iYear - 1) % 100
            kc = (self._iYear - 1) // 100
        elif self._iMonth >= 3:
            ka = self._iMonth - 2
            kb = self._iYear % 100
            kc = self._iYear // 100
        k2 = ( 26 * ka - 2) // 10
        k3 = self._iDay
        k4 = kb
        k5 = kb // 4
        k6 = kc // 4
        k7 = - 2 * kc
        iDayOfWeek = (k1 + k2 + k3 + k4 + k5 + k6 + k7) % 7
        
        if iDayOfWeek == 0:
            return "Sunday"
        elif iDayOfWeek == 1:
            return "Monday"
        elif iDayOfWeek == 2:
            return "Tuesday"
        elif iDayOfWeek == 3:
            return "Wednesday"
        elif iDayOfWeek == 4:
            return "Thursday"
        elif iDayOfWeek == 5:
            return "Friday"
        elif iDayOfWeek == 6:
            return "Saturday"
        else:
            print "%d, k1 = %d, k2 = %d, k3 = %d, k4 = %d, k5 = %d, k6 = %d, k7 = %d" % iDayOfWeek, k1, k2, k3, k4, k5, k6, k7
            return "ERROR!"
    
    def bIsLeapYear(self):
        if ( ( ( self._iYear % 4 == 0 ) and ( self._iYear % 100 != 0 ) ) or ( self._iYear % 400 == 0) ):
            return True
        else:
            return False
    
    def __sPrintMonthHead(self):
        if ( self.iGetMonth() == 1 ):
            sMonth = "January"
        elif ( self.iGetMonth(self) == 2):
            sMonth = "February"
        elif ( self.iGetMonth(self) == 3):
            sMonth = "March"
        elif ( self.iGetMonth(self) == 4):
            sMonth = "April"
        elif ( self.iGetMonth(self) == 5):
            sMonth = "May"
        elif ( self.iGetMonth(self) == 6):
            sMonth = "June"
        elif ( self.iGetMonth(self) == 7):
            sMonth = "July"
        elif ( self.iGetMonth(self) == 8):
            sMonth = "August"
        elif ( self.iGetMonth(self) == 9):
            sMonth = "September"
        elif ( self.iGetMonth(self) == 10):
            sMonth = "October"
        elif ( self.iGetMonth(self) == 11):
            sMonth = "November"
        elif ( self.iGetMonth(self) == 12):
            sMonth = "December"
        else:
            "ERROR: !!!!"
            
        print "|                          ", sMonth, "                                |"
        print "| Monday | Tuesday | Wednesday | Thursday | Friday | Saturday | Sunday |"
        
        
        
    def vPrintMonth(self):
        self.__sPrintMonthHead()
        pass
    
    def vPrintYear(self):
        pass
