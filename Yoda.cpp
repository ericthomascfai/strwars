//
// Created by eric on 27/10/2021.
//

#include "Yoda.h"


Yoda::Yoda(const string &nom, Alliance &alliance) : Rebel(nom, alliance), alliance(alliance){}

void Yoda::coffrer(MembreEmpire &me) {
    parler("Au nom de l'alliance je vous arrête!");
    Rebel::coffrer(me);

}

void Yoda::sePresenter() {
    Rebel::sePresenter();
    parler("Je commande "+ to_string(alliance.getLesrebels().size())+" membres de l'alliance");
}

const string Yoda::quel_est_ton_nom() const {
    return "Maitre yoda";
}

void Yoda::rechercher(MembreEmpire &me) {
    for(Rebel re:alliance.getLesrebels()) {
        télépathie(re, "Le côté obscur de la Force, redouter tu dois.!! " + to_string(me.quel_est_ta_recompense()) +
                       " peggats à qui arrêtera " + me.quel_est_ton_nom() + " le Membre de l’empire mort ou vif !");
    }
}

void Yoda::télépathie(Rebel &re, const string &message) {
    parler("))) "+re.quel_est_ton_nom()+" "+message);

}




