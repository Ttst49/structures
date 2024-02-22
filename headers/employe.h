#ifndef STRUCTURES_EMPLOYE_H
#define STRUCTURES_EMPLOYE_H

struct employe{
    char nom[10];
    char prenom[10];
    double salaire;
};

[[maybe_unused]]
void saisir_employe(employe &e);
[[maybe_unused]]
void afficher_employe(employe &e);

#endif
