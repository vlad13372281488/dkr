#include "ChotyrykutnykManager.h"
#include <iostream>
#include "Logger.h"
#include <fstream> // для роботи з файлами
#include <sstream> // дозволяє працювати з рядками як з потоками вводу-виводу.

int main() {
    Logger logger("log.txt");           //для створення логування
    logger.log("Program started");
    ChotyrykutnykManager manager; // об'єкт класу
    int choice;

    do {
        std::cout << "1. Add Chotyrykutnyk" << std::endl;
        std::cout << "2. Display Chotyrykutnyky" << std::endl;
        std::cout << "3. Display Statistics" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                double side1, side2, side3, side4;
                std::cout << "Enter side1: ";
                std::cin >> side1;
                std::cout << "Enter side2: ";
                std::cin >> side2;
                std::cout << "Enter side3: ";
                std::cin >> side3;
                std::cout << "Enter side4: ";
                std::cin >> side4;

                Chotyrykutnyk chotyrykutnyk(side1, side2, side3, side4); //об'єкт змінної chotyrykutnyk типу Chotyrykutnyk, передає значення сторін side1, side2, side3, side4 в якості аргументів конструктора класу Chotyrykutnyk
                manager.addChotyrykutnyk(chotyrykutnyk); // додає об'єкт chotyrykutnyk до списку чотирикутників, які управляються об'єктом manager
                logger.log("Added chotyrykutnyk");
                break;
            }
            case 2:
                manager.displayChotyrykutnyky(); // виконує функцію виведення списку чотирикутників на екран, що зберігаються в об'єкті manager
                logger.log("Checked chotyrykutnyks");
                break;
            case 3:
                manager.displayStatistics(); // виконує функцію виведення статистики про чотирикутники на екран, що зберігаються в об'єкті manager
                logger.log("Checked statistics");
                break;
            case 0:
                std::cout << "Exiting..." << std::endl;
                logger.log("Exited the program");
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                logger.log("Invalid imput detected");
        }

        std::cout << std::endl;
    } while (choice != 0);

    return 0;
}
