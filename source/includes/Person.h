#ifndef PERSON_H
#define PERSON_H

#include "Member.h"
#include "Date.h"
#include <string>

class Person : public Member
{
public:
	Person(std::string name, std::string sexe, Date birthday)
		:Member(name), _birthday(birthday),_sexe(sexe)
	{
		//initialize _age
	};

	int getAge() const { return _age }; 
	std::string getSexe() const {return _sexe };
	Date getBirthdate() const { return _birthday };

private:
	int _age;
	std::string _sexe;
	Date _birthday;
};

#endif