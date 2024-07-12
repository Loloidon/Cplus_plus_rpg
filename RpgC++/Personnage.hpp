#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE
#include "Arme.hpp"
#include <string>
#include <map>
class Personnage
{
	public:
        Personnage();
        Personnage(std::string nomArme,int degatsArme);
        ~Personnage();
        void recevoirDegats(int degats);
        int recevoiretourdissement();
        int recevoircongelation();
        int esquive();
        void attaquer(Personnage& cible);
        void boirePotionDeVie(int quantitePotion);
        void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
        std::string getNom() const;
        void setNom(std::string nom);
        bool estVivant() const;
        void afficherEtat()const;
        void opponentManager();
        Personnage switchOpponent(map<int,Personnage> dictionnaireennemi,int numadversaire);
        enum nomClasses { Guerrier, Magicien, Voleur };
        Arme* m_arme;

   protected:
       std::string pseudo;
       std::string m_nom;
       int m_vie=100;
       int m_mana=100;
       /*Arme *m_arme;*/
};
#endif // !DEF_PERSONNAGE
