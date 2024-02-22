#ifndef STRUCTURES_LISTE_H
#define STRUCTURES_LISTE_H
#include "employe.h"

const int liste_pleine=-1;
const int liste_nb_max=100;

struct liste{
    int nb;
    employe t[liste_nb_max];
};

void init_liste(liste &l);
int ajoute(liste &l, employe e);
void affiche(liste l);
void recherche(liste l1, char nom[],liste &l2);


#endif
