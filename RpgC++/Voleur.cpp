#include "Personnage.hpp"
#include "Voleur.hpp"
#include <string>
#include <iostream>
using namespace std;

void Voleur::coupDePoignard(Personnage& cible)
{
	int degats = 85;
	cout << "AHAHAHA ca fais mal hein" << endl;
	cible.recevoirDegats(degats);

}


