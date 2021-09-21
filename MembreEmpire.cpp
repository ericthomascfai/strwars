//
// Created by eric on 21/09/2021.
//

#include "MembreEmpire.h"

MembreEmpire::MembreEmpire(const string &nom) : Humanoide(nom) {
this->rang="soldat";
recompense=100;
etat=false; //libre
nbprincesses=0;
}

void MembreEmpire::kidnapper(Princesse &pr) {
    nbprincesses++;
    parler("Si tu n'es pas avec moi"+pr.quel_est_ton_nom()+"alors tu es contre moi !!" );
    pr.seFaireKidnapper(*this);
}

void MembreEmpire::seFaireEmprisonner(const Rebel &re) {
    //à compléter
    etat=true;
}

const int MembreEmpire::quel_est_ta_recompense() {
    return recompense;
}
