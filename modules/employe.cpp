#include "../headers/employe.h"
#include <iostream>
using namespace std;

[[maybe_unused]]
void saisir_employe(employe &e){
    cout << "Donnez le nom du nouvel employé" << endl; cin >> e.nom;
    cout << "Donnez le prénom du nouvel employé" << endl; cin >> e.prenom;
    cout << "Donnez le salaire du nouvel employé" << endl; cin >> e.salaire;
}

[[maybe_unused]]
void afficher_employe(employe &e){
    cout << e.nom << " " << e.prenom << "|" << e.salaire << endl;
}