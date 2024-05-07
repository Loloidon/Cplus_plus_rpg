#ifndef DEF_MAGICIEN
#define DEF_MAGICIEN

#include <iostream>
#include <string>
#include "Personnage.hpp"

class Magicien : public Personnage
{
public:
    void bouleDeFeu() const;
    void bouleDeGlace() const;

private:
    int m_mana;
};

#endif