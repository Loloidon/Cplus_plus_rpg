#include "Arme.hpp"
#include <string>
#include <iostream>
using namespace std;

Arme::Arme():m_nom("Markus"),m_degats(69)
{

}
Arme::Arme(string nom, int degats) : m_nom(nom), m_degats(degats)
{

}
void Arme::changer(string nom, int degats)
{
	m_nom = nom;
	m_degats = degats;
}
void Arme::afficher() const
{
	cout << "Arme :" << m_nom << "elle fais : " << m_degats << endl;
}
int Arme::Getdegats()const
{
	return m_degats;
}
void Arme::Setdegats(int degats)
{
	m_degats = degats;
}
string Arme::Getnom()const
{
	return m_nom;
}
void Arme::Setnom(string nom)
{
	m_nom = nom;
}