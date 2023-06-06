#ifndef CHOTYRYKUTNYKMANAGER_H
#define CHOTYRYKUTNYKMANAGER_H

#include "Chotyrykutnyk.h"
#include <vector>

class ChotyrykutnykManager {
private:
    std::vector<Chotyrykutnyk> chotyrykutnyky; // для зберігання чотирикутників, які будуть додаватися та видалятися за допомогою методів

public:
    void addChotyrykutnyk(const Chotyrykutnyk& chotyrykutnyk); // метод, який додає новий об'єкт типу Chotyrykutnyk до вектора chotyrykutnyky. використовується посилання на константний об'єкт chotyrykutnyk, щоб уникнути непотрібного копіювання
    void displayChotyrykutnyky() const; // метод, який виводить інформацію про всі об'єкти типу Chotyrykutnyk у векторі chotyrykutnyky
    void displayStatistics() const; // метод, який виводить статистичну інформацію про об'єкти типу Chotyrykutnyk, зокрема кількість чотирикутників, їхню сумарну площу та периметр
};

#endif
