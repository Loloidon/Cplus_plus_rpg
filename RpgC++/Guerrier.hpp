#ifndef GUERRIER
#define GUERRIER

#include <iostream>
#include <string>
#include "Personnage.hpp"

class Guerrier : public Personnage
{
	public:
		void frapperAvecUnMarteau(Personnage &cible);

};


#endif // !GUERRIER
