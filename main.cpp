#include <iostream>
using namespace std;

struct point{
    double x,y;
};

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

int main() {
    pointUse();
    return 0;
}
