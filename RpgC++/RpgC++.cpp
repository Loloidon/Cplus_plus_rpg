// RpgC++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <stdlib.h>
#include "Personnage.hpp"
using namespace std;

   
int main()
{
    Personnage david, goliath("Souls Eater",999);
    //Création de 2 objets de type Personnage : david et goliath

    goliath.attaquer(david);    //goliath attaque david
    david.boirePotionDeVie(20); //david récupère 20 de vie en buvant une potion
    goliath.attaquer(david);    //goliath attaque david
    david.attaquer(goliath);    //david contre-attaque... c'est assez clair non ?

    goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
    goliath.attaquer(david);
    
    cout << "david"<< endl;
    david.afficherEtat();
    cout << "Goliath" << endl;
    goliath.afficherEtat();


    return 0;
}

