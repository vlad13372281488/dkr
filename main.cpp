#include "ChotyrykutnykManager.h"
#include <iostream>
#include "Logger.h"
#include <fstream> // ��� ������ � �������
#include <sstream> // �������� ��������� � ������� �� � �������� �����-������.

int main() {
    Logger logger("log.txt");           //��� ��������� ���������
    logger.log("Program started");
    ChotyrykutnykManager manager; // ��'��� �����
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

                Chotyrykutnyk chotyrykutnyk(side1, side2, side3, side4); //��'��� ����� chotyrykutnyk ���� Chotyrykutnyk, ������ �������� ����� side1, side2, side3, side4 � ����� ��������� ������������ ����� Chotyrykutnyk
                manager.addChotyrykutnyk(chotyrykutnyk); // ���� ��'��� chotyrykutnyk �� ������ �������������, �� ������������ ��'����� manager
                logger.log("Added chotyrykutnyk");
                break;
            }
            case 2:
                manager.displayChotyrykutnyky(); // ������ ������� ��������� ������ ������������� �� �����, �� ����������� � ��'��� manager
                logger.log("Checked chotyrykutnyks");
                break;
            case 3:
                manager.displayStatistics(); // ������ ������� ��������� ���������� ��� ������������� �� �����, �� ����������� � ��'��� manager
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
