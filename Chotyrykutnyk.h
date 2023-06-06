#ifndef CHOTYRYKUTNYK_H
#define CHOTYRYKUTNYK_H

#include <string>

class Chotyrykutnyk {
private: // доступні лише в межах класу Chotyrykutnyk
    double side1; // Перша сторона чотирикутника
    double side2; // Друга сторона чотирикутника
    double side3; // Третя сторона чотирикутника
    double side4; // Четверта сторона чотирикутника

public:
    Chotyrykutnyk(); // Конструктор за замовчуванням
    Chotyrykutnyk(double s1, double s2, double s3, double s4); // Конструктор, який приймає чотири аргументи, використовується для створення об'єкта Chotyrykutnyk зі специфікованими значеннями сторін

    double getSide1() const; // Метод для отримання значення першої сторони
    double getSide2() const; // Метод для отримання значення другої сторони
    double getSide3() const; // Метод для отримання значення третьої сторони
    double getSide4() const; // Метод для отримання значення четвертої сторони

    double calculateArea() const; // Метод для обчислення площі чотирикутника
    double calculatePerimeter() const; // Метод для обчислення периметру чотирикутника
    std::string calculateType() const; // Метод для визначення типу чотирикутника (рядок)
};

#endif
