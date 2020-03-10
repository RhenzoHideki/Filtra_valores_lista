// implemente aqui sua função
#include "questao.h"
#include <list>
#include <iostream>

using namespace std;

void filtra(list<int> & nova, list<int> & lval, int limiar){

    for (auto & sub: lval) {
        if (sub>limiar) nova.push_back(sub);
    }
}