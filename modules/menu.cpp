#include "../headers/menu.h"
#include <iostream>
using namespace std;

int choix(){
    int i;
    cout << "1.Ajoute un employe" << endl;
    cout << "2.Afficher la liste" << endl;
    cout << "3.Rechercher un employe" << endl;
    cout << "4.Quitter" << endl;
    cout << "Votre choix :"; cin >> i;
    return i;
}

void menu(liste &l){

    bool fini;
    int i;
    do{
        i=choix();
        fini = traiter_choix(l,i);
    } while (!fini);
}

bool traiter_choix(liste &l,int choix)
{
    employe e{};
    char nom[10];
    liste l2{};
    int r;
    bool fini = false;
    switch(choix)
    {
        case 1:
            saisir_employe(e);
            r = ajoute(l, e);
            if(r == liste_pleine) cout << "La liste est pleine" << endl;
            break;
        case 2:
            affiche(l);
            break;
        case 3:
            cout << "Tapez le nom :"; cin >> nom; recherche(l, nom, l2);
            cout << "Voici le resultat de la recherche :" << endl;
            affiche(l2);
            break;
        case 4:
            fini = true;
            break;
        default:
            break;
    }
    return fini;
}