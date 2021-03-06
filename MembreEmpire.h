//
// Created by eric on 21/09/2021.
//

#ifndef STRWARS_MEMBREEMPIRE_H
#define STRWARS_MEMBREEMPIRE_H


#include "Humanoide.h"
#include "Princesse.h"
class Princesse;
class Rebel;
class MembreEmpire : public Humanoide{
private:
    string rang;
    int nbprincesses;
    bool etat;
    int recompense;

public:
    MembreEmpire(const string &nom);
    void kidnapper(Princesse &pr) ;
    void seFaireEmprisonner(const Rebel &re);
    const int quel_est_ta_recompense();
    const string quel_est_ton_nom() const override;

    int getRecompense() const;

    void sePresenter() override;
};


#endif //STRWARS_MEMBREEMPIRE_H
