#include "includes/Date.h"

Date::Date()
{
    time_t t = time(0);   // get time now
    struct tm* now = localtime(&t);
    _year = now->tm_year + 1900;
    _month = now->tm_mon+1;
    _day = now->tm_mday;
}

//prints a date in format DD / MM / YYYY
std::ostream& operator<<(std::ostream& os, const Date& date)
{
	return os<< date.getDay() <<" / "<<date.getMonth()<<" / "<<date.getYear();
}
