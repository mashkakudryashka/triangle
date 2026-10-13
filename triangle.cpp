#include "triangle.h"

bool exists(double a_1, double a_2, double a_3){return (a_1 + a_2 > a_3) && (a_1 + a_3 > a_2) && (a_2 + a_3 > a_1);}
double perimetr(double a_1, double a_2, double a_3){return a_1 + a_2 + a_3;}
double area(double a_1, double a_2, double a_3){return 0;}
std::string triangle_angles(double a_1, double a_2, double a_3){return "";}
std::string triangle_sides(double a_1, double a_2, double a_3){return "";}