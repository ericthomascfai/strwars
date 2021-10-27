//
// Created by eric on 21/09/2021.
//

#ifndef STRWARS_REBEL_H
#define STRWARS_REBEL_H


#include "Humanoide.h"
#include "MembreEmpire.h"
#include "Alliance.h"

class MembreEmpire;
class Princesse;
class Alliance;
class Rebel: public Humanoide {
private:


    int popularite;
    string adjectif;



public:
    Rebel(const string &nom, Alliance &alliance);
    void tirer(MembreEmpire &me);
    virtual void coffrer(MembreEmpire &me);
    void liberer(Princesse &pr);

    void sePresenter() override;


};


#endif //STRWARS_REBEL_H
