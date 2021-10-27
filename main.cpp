#include <iostream>
#include "Humanoide.h"
#include "Princesse.h"
#include "Barman.h"

int main() {
    Humanoide h=Humanoide("Human");
    cout<<h.quel_est_ton_nom()<<endl;
    h.parler("Hello");
    h.sePresenter();
    h.boire();
    Princesse p=Princesse("Leila","Blanche");
    cout<<p.quel_est_ton_nom()<<endl;
    p.sePresenter();
    p.changerRobe("Rose");
    MembreEmpire me=MembreEmpire("Darky");
    me.sePresenter();
    cout<<me.quel_est_ton_nom()<<endl;
    me.kidnapper(p);
    Rebel rebel=Rebel("LUK");
    rebel.sePresenter();
    cout<<rebel.quel_est_ton_nom()<<endl;
    rebel.coffrer(me);
    rebel.liberer(p);
    rebel.tirer(me);
    Barman barman=Barman("Joe");
    barman.sePresenter();
    barman.servir(rebel);
    barman.parler("Salut");

    return 0;
}
