//
// Created by eric on 26/10/2021.
//

#include "Barman.h"

Barman::Barman(const string &nom) : Humanoide(nom){
boisson_favorite="vin";
nom_du_bar="Chez"+nom;
}

Barman::Barman(const string &nom, const string &nom_du_bar): Humanoide(nom),nom_du_bar(nom_du_bar) {
boisson_favorite="vin";
}

void Barman::servir(Humanoide &humanoide) {
humanoide.boire();
}

void Barman::parler(const string &texte) {
    Humanoide::parler(texte+" coco");
}
