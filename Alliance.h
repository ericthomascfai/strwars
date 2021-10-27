//
// Created by eric on 27/10/2021.
//

#ifndef STRWARS_ALLIANCE_H
#define STRWARS_ALLIANCE_H
#include <vector>
#include "Rebel.h"
class Rebel;
class Alliance {

private:
    vector<Rebel> lesrebels;


public:
     vector<Rebel> &getLesrebels() ;

};


#endif //STRWARS_ALLIANCE_H
