#include "includes/Person.h"

Person::Person(std::string name, int age, std::string sexe, short year, short month, short day)
{
	_birthday = Date(year, month, day);
}