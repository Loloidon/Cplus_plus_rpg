#include "Personnage.hpp"
#include "Arme.hpp"
#include <string>
#include <iostream>

using namespace std;

Personnage::Personnage() :m_nom("David"), m_vie(100), m_mana(100), m_arme("Caillou", 20)
{

}
Personnage::Personnage(string nomArme, int degatsArme) :m_nom("Goliath"), m_vie(100), m_mana(100), m_arme("Claymore", 30)
{

}
void Personnage::recevoirDegats()
{
	cout << m_nom << ":" << "AAAAAAAAAAAAH JE RECOIS " << m_arme.Getdegats() << " de degats !" << endl;
	m_vie -= m_arme.Getdegats();

	if (m_vie < 0)
	{
		m_vie = 0;
	}
}
void Personnage::attaquer(Personnage& cible)
{
	cout << m_nom << ":" << "YAAAAAAAAAAAAAAH JATTAQUE!!!!!"<<endl;
	cible.recevoirDegats();
}
void Personnage::boirePotionDeVie(int quantitePotion)
{
	cout << m_nom << ":" << "GLOUPGLLOUP" << endl;
	m_vie += quantitePotion;

	if (m_vie > 100)
		m_vie = 100;
}
void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme)
{
	cout << m_nom << ":" << "JE CHANGE DARME DORENAVANT J'AURAIS : " << m_arme.Getnom() << endl;
	m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}
bool Personnage::estVivant() const
{
	return m_vie > 0;
}
void Personnage::afficherEtat() const
{
	cout << "vie :" << m_vie << endl;
	cout << "mana:" << m_mana<<endl;
	m_arme.afficher();
}