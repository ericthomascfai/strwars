//
// Created by eric on 21/09/2021.
//

#include "MembreEmpire.h"

MembreEmpire::MembreEmpire(const string &nom) : Humanoide(nom) {
this->rang="soldat";
recompense=100;
etat=false; //libre
nbprincesses=0;
boisson_favorite="Vin de fleur";
}

void MembreEmpire::kidnapper(Princesse &pr) {
    nbprincesses++;
    parler("Si tu n'es pas avec moi "+pr.quel_est_ton_nom()+" alors tu es contre moi !!" );
    pr.seFaireKidnapper(*this);
}

void MembreEmpire::seFaireEmprisonner(const Rebel &re) {
    parler("Je suis fait tu m'as eu "+re.quel_est_ton_nom());
    etat=true;
}

const int MembreEmpire::quel_est_ta_recompense() {
    return recompense;
}

const string MembreEmpire::quel_est_ton_nom() const {
    return Humanoide::quel_est_ton_nom()+" "+rang;
}

void MembreEmpire::sePresenter() {
    Humanoide::sePresenter();
    parler("mon rang est "+ rang+" et j'ai kidnappé "+to_string(nbprincesses)+" princesses, ma récompense est de "+ to_string(recompense)+" peggats");
}
