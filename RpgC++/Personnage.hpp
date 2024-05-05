#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE
#include <string>
#include "Arme.hpp"
class Personnage
{
	public:
        Personnage();
        Personnage(std::string nomArme,int degatsArme);
        void recevoirDegats(int nbDegats);
        void attaquer(Personnage& cible);
        void boirePotionDeVie(int quantitePotion);
        void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
        bool estVivant() const;
        void afficherEtat()const;

   private:
       int m_vie;
       int m_mana;
       Arme m_arme;
       Arme m_degats;
};
#endif // !DEF_PERSONNAGE
