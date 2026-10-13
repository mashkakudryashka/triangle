#include "triangle.h"
#include <cmath>

bool exists(double a_1, double a_2, double a_3){return (a_1 + a_2 > a_3) && (a_1 + a_3 > a_2) && (a_2 + a_3 > a_1);}
double perimetr(double a_1, double a_2, double a_3){return a_1 + a_2 + a_3;}
double area(double a_1, double a_2, double a_3){
    double p =perimetr(a_1, a_2, a_3) / 2;
    return std::sqrt(p * (p - a_1) * (p - a_2) * (p - a_3));}
std::string triangle_angles(double a_1, double a_2, double a_3){
    double longest_side = a_1;
    if (a_2 > longest_side) longest_side = a_2;
    if (a_3 > longest_side) longest_side = a_3;

    double longest_2 = longest_side * longest_side;
    double others_sides_2 = a_1 * a_1 + a_2 * a_2 + a_3 * a_3 - longest_2;
    if (std::abs(longest_2 - others_sides_2) < 1e-9) return "прямоугольный";
    if (longest_2 < others_sides_2) return "остроугольный";
    return "тупоугольный";
    }
std::string triangle_sides(double a_1, double a_2, double a_3){return "";}