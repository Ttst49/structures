#ifndef STRUCTURES_POINT_H
#define STRUCTURES_POINT_H

struct point{
    double x,y;
};

[[maybe_unused]]
void saisir_point(point &p);
[[maybe_unused]]
void afficher_point(point p);
[[maybe_unused]]
double distance(point a, point b);
[[maybe_unused]]
void milieu(point a, point b, point &m);

#endif
