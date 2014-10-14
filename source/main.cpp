#include "includes/Member.h"

#include <iostream>

int main()
{
	Member* Alexis = new Member("Alexis Cabana-Loriaux");
	
	std::cout << Alexis->getName()<<" joined on "<< Alexis->getJoiningDate().getYe
	
	return 0;	
}