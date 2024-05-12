#include "Personnage.hpp"
#include "Magicien.hpp"
#include <string>
#include <iostream>
using namespace std;


void Magicien::bouleDeFeu(Personnage&cible)
{
	int degats = 25;
	cout << m_nom<< " : " << "je lance un boule de feu faisant : " << "25 points de dégats" << endl;
	cible.recevoirDegats(degats);
}
void Magicien::bouleDeGlace(Personnage& cible)
{
	int degats = 30;
	cout << m_nom << " : " << "je lance un boule de glace faisant : " << "30 points de dégats" << endl;
	cible.recevoirDegats(degats);

}
