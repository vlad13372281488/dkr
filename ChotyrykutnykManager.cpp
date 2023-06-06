#include "ChotyrykutnykManager.h"
#include <iostream>
#include <algorithm>

void ChotyrykutnykManager::addChotyrykutnyk(const Chotyrykutnyk& chotyrykutnyk) { // виконує додавання об'єкта типу Chotyrykutnyk до вектора chotyrykutnyky, який є приватним полем класу ChotyrykutnykManager, const Chotyrykutnyk& chotyrykutnyk оголошує посилання на об'єкт типу Chotyrykutnyk, який буде доданий до вектора. Використання посилання дозволяє передавати об'єкти без зайвого копіювання
    chotyrykutnyky.push_back(chotyrykutnyk); // використовується метод push_back вектора, щоб додати chotyrykutnyk в кінець вектора chotyrykutnyky
    std::cout << "Chotyrykutnyk saved." << std::endl; // викликаються методи об'єкта chotyrykutnyk, для отримання типу, периметру та площі чотирикутника
    std::cout << "Type: " << chotyrykutnyk.calculateType() << std::endl;
    std::cout << "Perimeter: " << chotyrykutnyk.calculatePerimeter() << std::endl;
    std::cout << "Area: " << chotyrykutnyk.calculateArea() << std::endl;
}

void ChotyrykutnykManager::displayChotyrykutnyky() const { // виводить інформацію про всі об'єкти Chotyrykutnyk, які зберігаються в векторі chotyrykutnyky
    std::cout << "Chotyrykutnyk List:" << std::endl;
    for (const auto& chotyrykutnyk : chotyrykutnyky) { // auto& використовується для ітерації через елементи контейнера з використанням посилань, щоб забезпечити прямий доступ і зміну елементів у контейнері
        std::cout << "Type: " << chotyrykutnyk.calculateType() << std::endl;
        std::cout << "Perimeter: " << chotyrykutnyk.calculatePerimeter() << std::endl;
        std::cout << "Area: " << chotyrykutnyk.calculateArea() << std::endl;
        std::cout << "------------------------" << std::endl;
    }
}

void ChotyrykutnykManager::displayStatistics() const {
    std::cout << "Statistics:" << std::endl;

    // Кількість чотирикутників різного типу
    int squareCount = 0;
    int rectangleCount = 0;
    int rhombusCount = 0;
    int arbitraryCount = 0;

    // Мінімальна та максимальна площа та периметр для кожного типу чотирикутника
    double minSquareArea = std::numeric_limits<double>::max();
    double maxSquareArea = 0.0;
    double minSquarePerimeter = std::numeric_limits<double>::max();
    double maxSquarePerimeter = 0.0;

    double minRectangleArea = std::numeric_limits<double>::max();
    double maxRectangleArea = 0.0;
    double minRectanglePerimeter = std::numeric_limits<double>::max();
    double maxRectanglePerimeter = 0.0;

    double minRhombusArea = std::numeric_limits<double>::max();
    double maxRhombusArea = 0.0;
    double minRhombusPerimeter = std::numeric_limits<double>::max();
    double maxRhombusPerimeter = 0.0;

    double minArbitraryArea = std::numeric_limits<double>::max();
    double maxArbitraryArea = 0.0;
    double minArbitraryPerimeter = std::numeric_limits<double>::max();
    double maxArbitraryPerimeter = 0.0;

    for (const auto& chotyrykutnyk : chotyrykutnyky) {
        std::string type = chotyrykutnyk.calculateType();
        double area = chotyrykutnyk.calculateArea();
        double perimeter = chotyrykutnyk.calculatePerimeter();

        if (type == "Square") {
            squareCount++;
            if (area < minSquareArea)
                minSquareArea = area;
            if (area > maxSquareArea)
                maxSquareArea = area;
            if (perimeter < minSquarePerimeter)
                minSquarePerimeter = perimeter;
            if (perimeter > maxSquarePerimeter)
                maxSquarePerimeter = perimeter;
        }
        else if (type == "Rectangle") {
            rectangleCount++;
            if (area < minRectangleArea)
                minRectangleArea = area;
            if (area > maxRectangleArea)
                maxRectangleArea = area;
            if (perimeter < minRectanglePerimeter)
                minRectanglePerimeter = perimeter;
            if (perimeter > maxRectanglePerimeter)
                maxRectanglePerimeter = perimeter;
        }
        else if (type == "Rhombus") {
            rhombusCount++;
            if (area < minRhombusArea)
                minRhombusArea = area;
            if (area > maxRhombusArea)
                maxRhombusArea = area;
            if (perimeter < minRhombusPerimeter)
                minRhombusPerimeter = perimeter;
            if (perimeter > maxRhombusPerimeter)
                maxRhombusPerimeter = perimeter;
        }
        else {
            arbitraryCount++;
            if (area < minArbitraryArea)
                minArbitraryArea = area;
            if (area > maxArbitraryArea)
                maxArbitraryArea = area;
            if (perimeter < minArbitraryPerimeter)
                minArbitraryPerimeter = perimeter;
            if (perimeter > maxArbitraryPerimeter)
                maxArbitraryPerimeter = perimeter;
        }
    }

    // Виведення статистики
    if (squareCount > 0) {
        std::cout << "Square count: " << squareCount << std::endl;
        std::cout << "Minimum square area: " << minSquareArea << std::endl;
        std::cout << "Maximum square area: " << maxSquareArea << std::endl;
        std::cout << "Minimum square perimeter: " << minSquarePerimeter << std::endl;
        std::cout << "Maximum square perimeter: " << maxSquarePerimeter << std::endl;
    }
    else {
        std::cout << "No squares found." << std::endl;
    }

    if (rectangleCount > 0) {
        std::cout << "Rectangle count: " << rectangleCount << std::endl;
        std::cout << "Minimum rectangle area: " << minRectangleArea << std::endl;
        std::cout << "Maximum rectangle area: " << maxRectangleArea << std::endl;
        std::cout << "Minimum rectangle perimeter: " << minRectanglePerimeter << std::endl;
        std::cout << "Maximum rectangle perimeter: " << maxRectanglePerimeter << std::endl;
    }
    else {
        std::cout << "No rectangles found." << std::endl;
    }

    if (rhombusCount > 0) {
        std::cout << "Rhombus count: " << rhombusCount << std::endl;
        std::cout << "Minimum rhombus area: " << minRhombusArea << std::endl;
        std::cout << "Maximum rhombus area: " << maxRhombusArea << std::endl;
        std::cout << "Minimum rhombus perimeter: " << minRhombusPerimeter << std::endl;
        std::cout << "Maximum rhombus perimeter: " << maxRhombusPerimeter << std::endl;
    }
    else {
        std::cout << "No rhombuses found." << std::endl;
    }

    if (arbitraryCount > 0) {
        std::cout << "Arbitrary count: " << arbitraryCount << std::endl;
        std::cout << "Minimum arbitrary area: " << minArbitraryArea << std::endl;
        std::cout << "Maximum arbitrary area: " << maxArbitraryArea << std::endl;
        std::cout << "Minimum arbitrary perimeter: " << minArbitraryPerimeter << std::endl;
        std::cout << "Maximum arbitrary perimeter: " << maxArbitraryPerimeter << std::endl;
    }
    else {
        std::cout << "No arbitrary quadrilaterals found." << std::endl;
    }
}
