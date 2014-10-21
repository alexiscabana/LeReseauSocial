#include "includes/Relation.h"

std::string Relation::getRelationType()
{
    if(_type == AMITIE) 			return "Amitie";
    else if (_type == CONNAISSANCE) return "Connaissance";
    else if (_type == TRAVAIL) 		return "Travail";
    else return "Autres";
}
