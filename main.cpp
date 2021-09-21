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
    p.sePresenter();
    p.changerRobe("Rose");
    return 0;
}
