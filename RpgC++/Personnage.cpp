#include "Personnage.hpp"
#include "Arme.hpp"
#include <string>
#include <iostream>

using namespace std;

Personnage::Personnage() :m_nom("David"), m_vie(100), m_mana(100)
{
	m_arme = new Arme("Lance",25);
}
Personnage::Personnage(string nomArme, int degatsArme) :m_nom("Goliath"), m_vie(100), m_mana(100)
{
	m_arme = new Arme("Claymore", 20);
}
Personnage ::~Personnage()
{
	delete m_arme;
}
void Personnage::recevoirDegats(int degats)
{
	degats = m_arme->Getdegats();
	cout << m_nom << ":" << "AAAAAAAAAAAAH JE RECOIS " << m_arme->Getdegats() << " de degats !" << endl;
	m_vie -= degats;

	if (m_vie < 0)
	{
		m_vie = 0;
	}
}
int Personnage:: recevoiretourdissement(int degats)
{
	int rng = 0;
	rng = rand() % 3;
	cout << "AAAH ma tete zzZZzzZZzZzZ" << endl;
	return rng;
}
int Personnage::recevoircongelation(int degats)
{
	int rng = 0;
	rng = rand() % 3;
	cout << "AAAH JE DEVIENS UN GLACOOOOOOON !!!!!" << endl;
	return rng;
}
int Personnage::esquive()
{
	int rng = 0;
	rng = rand() % 3;
	if(rng==3)
	cout << "AHAHAHA j'esquive !!!" << endl;
	return rng;
}
void Personnage::attaquer(Personnage& cible)
{
	int rngesquive = cible.esquive();
	cout << m_nom << ":" << "YAAAAAAAAAAAAAAH JATTAQUE!!!!!"<<endl;
	if(rngesquive==!3)
	cible.recevoirDegats(m_arme->Getdegats());
}
void Personnage::boirePotionDeVie(int quantitePotion)
{
	cout << m_nom << ":" << "GLOUPGLLOUP" << endl;
	m_vie += quantitePotion;

	if (m_vie > 100)
		m_vie = 100;
}
void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
	cout << m_nom << ":" << "JE CHANGE DARME DORENAVANT J'AURAIS : " << m_arme->Getnom() << endl;
	m_arme->changer(nomNouvelleArme, degatsNouvelleArme);
}
bool Personnage::estVivant() const
{
	return m_vie > 0;
}
void Personnage::afficherEtat() const
{
	cout << "vie :" << m_vie << endl;
	cout << "mana:" << m_mana<<endl;
	m_arme->afficher();
}
void Personnage:: setNom(std::string nom)
{
	pseudo = nom;
	
}
std::string Personnage:: getNom() const
{
	return pseudo;
}