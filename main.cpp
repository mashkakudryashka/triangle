#include <iostream>
#include "triangle.h"

int main(){
    double a_1, a_2, a_3;
    std::cout << "Введите длины трех сторон треугольника: ";
    std::cin >> a_1 >> a_2 >> a_3;
    if (!exists(a_1, a_2, a_3)){
        std::cout << "Треугольника с такими сторонами не существует " << std::endl;
        return 0;
    }
    std::cout << "Треугольник существует, он " << triangle_angles(a_1, a_2, a_3) << std::endl;
    std::cout << "Периметр равен: " << perimetr(a_1, a_2, a_3) << std::endl;
    std::cout << "Площадь равна: " << area(a_1, a_2, a_3) << std::endl;
    return 0;
}