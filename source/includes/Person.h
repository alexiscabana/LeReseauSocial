#ifndef PERSON_H
#define PERSON_H

#include Member.h
#include Date.h

class Person : public Member
{
public:
	Person(std::string name, int age, std::string sexe, short year, short month, short day)
		:Member(name), _age(age), _sexe(sexe)
	{};

	int getAge() const { return _age }; 
	std::string getSexe() const {return _sexe };
	Date getBirthday() const { return _birthday };

private:
	int _age;
	std::string _sexe;
	Date _birthday;
};

#endif