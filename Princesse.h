//
// Created by eric on 21/09/2021.
//

#ifndef STRWARS_PRINCESSE_H
#define STRWARS_PRINCESSE_H


#include "Humanoide.h"
#include "Rebel.h"
#include "MembreEmpire.h"

class Princesse: public Humanoide {
private:
    string couleur_robe;
    bool etat;

public:
    Princesse(const string &nom,const string &couleurrobe);
    void seFaireKidnapper(const MembreEmpire &me);
    void seFaireLiberer(const Rebel &re);
    void changerRobe(const string &newcolor);



};


#endif //STRWARS_PRINCESSE_H
