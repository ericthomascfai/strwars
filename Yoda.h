//
// Created by eric on 27/10/2021.
//

#ifndef STRWARS_YODA_H
#define STRWARS_YODA_H


#include "Rebel.h"
#include "Alliance.h"

class Yoda: public Rebel {

private:
    Alliance alliance;

public:
    Yoda(const string &nom, Alliance &alliance);
    void coffrer(MembreEmpire &me) override;
    void rechercher(MembreEmpire &me);
    void télépathie(Rebel &re,const string &message);
    void sePresenter() override;
    const string quel_est_ton_nom() const override;


};


#endif //STRWARS_YODA_H
