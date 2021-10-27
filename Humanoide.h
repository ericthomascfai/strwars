//
// Created by eric on 21/09/2021.
//

#ifndef STRWARS_HUMANOIDE_H
#define STRWARS_HUMANOIDE_H

#include <string>

using namespace std;

class Humanoide {
private:
    string nom;
protected:
    string boisson_favorite;
public:
    Humanoide(const string &nom);
    virtual void sePresenter();
    void boire();
    virtual const string quel_est_ton_nom() const ;
    virtual void parler(const string &texte);

};


#endif //STRWARS_HUMANOIDE_H
