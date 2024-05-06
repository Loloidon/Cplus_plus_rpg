#pragma once
#ifndef ARME
#define ARME
#include <string>
class Arme
{
	public:
		Arme();
		Arme(std::string nom, int degats);
		void changer(std::string nom, int degats);
		void afficher()const;
		std::string Getnom()const;
		void Setnom(std::string nom);
		int Getdegats()const;
		void Setdegats(int degats);
	private:
		std::string m_nom;
		int m_degats;
};
#endif // !ARME
