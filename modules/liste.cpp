#include "../headers/liste.h"
#include <iostream>
using namespace std;
#include "cstring"


void init_liste(liste &l){
    l.nb = 0;
}

int ajoute(liste &l, employe e){
    int r;
    if (l.nb == liste_nb_max){
        r= liste_pleine;
    } else{
        r=0;
        l.t[l.nb]=e;l.nb++;
    }
    return r;
}

void affiche(liste l){
    int i;
    if (l.nb==0){
        cout << "LISTE VIDE" << endl;
    }
    for (i = 0; i < l.nb; i++) {
        afficher_employe(l.t[i]);
    }
}

void recherche(liste l1, char nom[], liste &l2){
    int i;
    init_liste(l2);
    for(i=0; i<l1.nb; i++) if(strcmp(l1.t[i].nom, nom)==0) ajoute(l2, l1.t[i]);
}