//
// Created by eric on 21/09/2021.
//

#include <iostream>
#include "Rebel.h"
#include "Alliance.h"


Rebel::Rebel(const string &nom,Alliance &alliance) : Humanoide(nom) {
this->adjectif="Padawan";
popularite=0;
boisson_favorite="Whisky";
if(nom!="yoda") {
    alliance.getLesrebels().push_back(*this);//ajoute le rebel dans l'alliance
    parler("Je viens de rejoindre l'alliance");

}

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


