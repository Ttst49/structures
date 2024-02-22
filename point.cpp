#include "point.h"
#include "iostream"
#include "cmath"

using namespace std;

void saisir_point(point &p){
    cout << "Tapez l'abscisse du point : "; cin >> p.x;
    cout << "Tapez l'ordonnée du point : "; cin >> p.y;
}