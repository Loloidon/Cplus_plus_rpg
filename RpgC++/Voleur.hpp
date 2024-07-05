#ifndef VOLEUR
#define VOLEUR

#include <iostream>
#include <string>
#include "Personnage.hpp"

class Voleur : public Personnage
{
public:
	void coupDePoignard(Personnage &cible);

};


#endif // !VOLEUR
