#include <iostream>
#include "modules/point.h"
using namespace std;


[[maybe_unused]]
int pointUse(){

    point a{},b{},c{};
    a.x = 3.2;
    a.y = 6.4;

    cout << "Tapez l'abscisse de b : ";
    cin >> b.x;
    cout << "Tapez l'ordonnée de b : ";
    cin >> b.y;
    c.x = (b.x + a.x) / 2;
    c.y = (b.y + a.y) / 2;
    cout << "Abscisse de c : " << c.x << endl;
    cout << "Ordonnée de c : " << c.y << endl;

    return 0;

}

[[maybe_unused]]
int usePointsMethods(){

    point X{},Y{},Z{};
    double d;
    cout << "SAISIE DE X" << endl;
    saisir_point(X);
    cout << "SAISIE DE Y" << endl;
    saisir_point(Y);
    d = distance(X,Y);
    cout << "La distance de X à Y est : " << d << endl;
    milieu(X,Y,Z);
    cout << "AFFICHAGE DU POINT Z" << endl;
    afficher_point(Z);
    return 0;
}


int main() {
    usePointsMethods();
    return 0;
}
