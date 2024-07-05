// RpgC++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#include "Personnage.hpp"
#include "Interface.hpp"


using namespace std;

   
int main()
{
    Personnage david, goliath("Souls Eater",999);
    Interface gameInterface;
    

    gameInterface.introDrawing();
    gameInterface.creationPerso();
    gameInterface.displayArena();
    
    /*goliath.attaquer(david);    
    david.boirePotionDeVie(20); 
    goliath.attaquer(david);    
    david.attaquer(goliath);    

    goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
    goliath.attaquer(david);
    goliath.attaquer(david);
    goliath.attaquer(david);
    goliath.attaquer(david);
    
    
    cout << "david"<< endl;
    david.afficherEtat();
    cout << "Goliath" << endl;
    goliath.afficherEtat();*/
    

    return 0;
}

