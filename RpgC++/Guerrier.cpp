#include "Personnage.hpp"
#include "Guerrier.hpp"
#include <string>
#include <iostream>
using namespace std;

void Guerrier::frapperAvecUnMarteau(Personnage&cible)
{
	int degats = 35;
	int rng = cible.esquive();
	
	cout << "BAM ! sur ta t�te ! "<<endl;
	cible.recevoirDegats(degats);
	cible.recevoiretourdissement();
	
}


