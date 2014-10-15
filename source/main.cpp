#include "includes/Member.h"

#include <iostream>

int main()
{
	Member* Alexis = new Member("Alexis Cabana-Loriaux");
	
	std::cout << Alexis->getJoiningDate() << std::endl;
	
	return 0;	
}