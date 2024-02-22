#include "point.h"
#include "iostream"
#include "cmath"

using namespace std;

[[maybe_unused]]
void saisir_point(point &p){
    cout << "Tapez l'abscisse du point : "; cin >> p.x;
    cout << "Tapez l'ordonnée du point : "; cin >> p.y;
}

[[maybe_unused]]
void afficher_point(point p){
    cout << "L'abscisse de point x :" << p.x;
    cout << "L'abscisse de point y :" << p.y;
}

[[maybe_unused]]
double distance(point a, point b){
    double dx,dy;
    dx = a.x - b.x;
    dy = a.y - b.y;

    return sqrt(dx*dx+dy*dy);
}

[[maybe_unused]]
void milieu(point a, point b, point &m){
    m.x = (a.x + b.x) /2;
    m.y = (a.y + b.y) /2;
}
