//
// Created by eric on 21/09/2021.
//

#include <iostream>
#include "Rebel.h"

Rebel::Rebel(const string &nom) : Humanoide(nom) {
this->adjectif="Padawan";
popularite=0;
boisson_favorite="Whisky";
}

void Rebel::tirer(MembreEmpire &me) {
cout<<"Beau coup de sabre laser!"<<endl;
    parler("Que la force soit avec moi");
}

void Rebel::coffrer(MembreEmpire &me) {
me.seFaireEmprisonner(*this);
}

void Rebel::liberer(Princesse &pr) {
pr.seFaireLiberer(*this);
popularite++;
}

void Rebel::sePresenter() {
    Humanoide::sePresenter();
    parler("Je suis un "+adjectif);
}


