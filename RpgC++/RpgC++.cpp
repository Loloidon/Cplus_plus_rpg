// RpgC++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <stdlib.h>
#include "Personnage.hpp"
using namespace std;

   
int main()
{
    Personnage david, goliath("Souls Eater",999);
    

    goliath.attaquer(david);    
    david.boirePotionDeVie(20); 
    goliath.attaquer(david);    
    david.attaquer(goliath);    

    goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
    goliath.attaquer(david);
    
    cout << "david"<< endl;
    david.afficherEtat();
    cout << "Goliath" << endl;
    goliath.afficherEtat();


    return 0;
}

