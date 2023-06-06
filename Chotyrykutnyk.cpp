#include "Chotyrykutnyk.h"
#include <cmath>

Chotyrykutnyk::Chotyrykutnyk() : side1(0.0), side2(0.0), side3(0.0), side4(0.0) {}
// Конструктор за замовчуванням, установлює всі сторони чотирикутника на 0

Chotyrykutnyk::Chotyrykutnyk(double s1, double s2, double s3, double s4) : side1(s1), side2(s2), side3(s3), side4(s4) {}
// Конструктор з параметрами, ініціалізує сторони чотирикутника значеннями, переданими як аргументи

double Chotyrykutnyk::getSide1() const { // Ці методи дозволяють зовнішнім об'єктам отримувати значення сторін чотирикутника без прямого доступу до приватних полів класу Chotyrykutnyk
    return side1;
}

double Chotyrykutnyk::getSide2() const {
    return side2;
}

double Chotyrykutnyk::getSide3() const {
    return side3;
}

double Chotyrykutnyk::getSide4() const {
    return side4;
}

std::string Chotyrykutnyk::calculateType() const { // повертає рядок (std::string), що представляє тип чотирикутника на основі його сторін
    if (side1 == side2 && side2 == side3 && side3 == side4) {
        return "Square";
    } else if (side1 == side3 && side2 == side4) {
        return "Rectangle";
    } else if (side1 == side2 && side3 == side4) {
        return "Rhombus";
    } else {
        return "Arbitrary";
    }
}

double Chotyrykutnyk::calculateArea() const {
    std::string type = calculateType(); // викликається метод, щоб отримати тип чотирикутника у вигляді рядка
    if (type == "Square") {
        return side1 * side1;
    } else if (type == "Rectangle") {
        return side1 * side3;
    } else if (type == "Rhombus") {
        return (side1 * side3) / 2;
    } else {
        // Use Heron's formula to calculate area for arbitrary quadrilateral
        double s = (side1 + side2 + side3 + side4) / 2;
        return sqrt((s - side1) * (s - side2) * (s - side3) * (s - side4));
    }
}

double Chotyrykutnyk::calculatePerimeter() const {
    return side1 + side2 + side3 + side4;
}
