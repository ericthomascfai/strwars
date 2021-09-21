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
    string boisson_favorite;
public:
    Humanoide(const string &nom);
    void sePresenter();
    void boire();
    const string quel_est_ton_nom() const ;
    void parler(const string &texte);

};


#endif //STRWARS_HUMANOIDE_H
