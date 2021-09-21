//
// Created by eric on 21/09/2021.
//
using namespace std;

#include <iostream>
#include "Humanoide.h"

Humanoide::Humanoide(const string &nom) : nom(nom) {
    this->boisson_favorite="Eau";
}

void Humanoide::sePresenter() {
    parler("Bonjour je suis "+nom+" et ma boisson favorite est "+boisson_favorite);
}

void Humanoide::boire() {
    parler("Ahhh un bon verre de "+boisson_favorite);
}

const string Humanoide::quel_est_ton_nom() {
    return nom;
}

void Humanoide::parler(const string &texte) {
    cout<<nom<<" - "<<texte<<endl;
}
