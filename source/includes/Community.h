#ifndef COMMUNITY_H
#define COMMUNITY_H

#include "Member.h"
#include "Date.h"
#include <string>

class Community : public Member
{
public:
	Community(std::string name, short year, short month, short day)
		: Member(name);

	Date getFoundationDate() { return _founded };

private:
	Date _founded;
};

#endif