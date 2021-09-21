#include <iostream>
#include "Humanoide.h"

int main() {
    Humanoide h=Humanoide("Human");
    cout<<h.quel_est_ton_nom()<<endl;
    h.parler("Hello");
    h.sePresenter();
    h.boire();

    return 0;
}
