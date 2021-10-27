//
// Created by eric on 21/09/2021.
//

#include "Princesse.h"
#include "MembreEmpire.h"

Princesse::Princesse(const string &nom, const string &couleurrobe): Humanoide(nom),couleur_robe(couleurrobe) {
etat=false; //libre;
boisson_favorite="Lait bleu";
}

void Princesse::seFaireKidnapper( MembreEmpire &me) {

    etat=true;
    parler("Ahhhhhhhhhhhhhhhhhhhh!!!!!");

}

void Princesse::seFaireLiberer(const Rebel &re) {

    etat=false;
    parler("Merci "+re.quel_est_ton_nom());
}

void Princesse::changerRobe(const string &newcolor) {
    couleur_robe=newcolor; //changement de la couleur de larobe;
    parler("Regardez ma nouvelle robe "+couleur_robe);
}

const string Princesse::quel_est_ton_nom() const {
    return "Princesse "+Humanoide::quel_est_ton_nom();
}

void Princesse::sePresenter() {
    Humanoide::sePresenter();
    parler("Ma couleur de ma robe est "+ couleur_robe);
}
