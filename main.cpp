#include <iostream>
#include "Humanoide.h"
#include "Princesse.h"

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
    cout<<me.quel_est_ton_nom()<<endl;
    me.kidnapper(p);
    Rebel rebel=Rebel("LUK");
    rebel.coffrer(me);
    rebel.liberer(p);
    rebel.tirer(me);

    return 0;
}
