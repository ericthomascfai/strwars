//
// Created by eric on 26/10/2021.
//

#ifndef STRWARS_BARMAN_H
#define STRWARS_BARMAN_H


#include "Humanoide.h"

class Barman: public Humanoide {
private:

    string nom_du_bar;

public:
    Barman(const string &nom);
    Barman(const string &nom,const string &nom_du_bar);
    void servir(Humanoide &humanoide);

    void parler(const string &texte) override;
};


#endif //STRWARS_BARMAN_H
