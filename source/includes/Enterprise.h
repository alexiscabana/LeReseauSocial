#ifndef ENTERPRISE_H
#define ENTERPRISE_H

#include "Member.h"
#include "Date.h"
#include <string>

class Enterprise : public Member
{
public:
	Enterprise(std::string name, short year, short month, short day)
		: Member(name);

	Date getCreationDate() { return _creation };

private:
	Date _creation;
};

#endif