#include "includes/Relation.h"

std::string Relation::getRelationType()
{
    if(_type == AMITIE) 			return "Amitie\n";
    else if (_type == CONNAISSANCE) return "Connaissance\n";
    else if (_type == TRAVAIL) 		return "Travail\n";
    else return "Autres";
}