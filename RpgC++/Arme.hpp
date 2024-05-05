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
	private:
		std::string m_nom;
		int m_degats;
};
#endif // !ARME
