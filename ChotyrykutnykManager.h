#ifndef CHOTYRYKUTNYKMANAGER_H
#define CHOTYRYKUTNYKMANAGER_H

#include "Chotyrykutnyk.h"
#include <vector>

class ChotyrykutnykManager {
private:
    std::vector<Chotyrykutnyk> chotyrykutnyky; // ��� ��������� �������������, �� ������ ���������� �� ���������� �� ��������� ������

public:
    void addChotyrykutnyk(const Chotyrykutnyk& chotyrykutnyk); // �����, ���� ���� ����� ��'��� ���� Chotyrykutnyk �� ������� chotyrykutnyky. ��������������� ��������� �� ����������� ��'��� chotyrykutnyk, ��� �������� ����������� ���������
    void displayChotyrykutnyky() const; // �����, ���� �������� ���������� ��� �� ��'���� ���� Chotyrykutnyk � ������ chotyrykutnyky
    void displayStatistics() const; // �����, ���� �������� ����������� ���������� ��� ��'���� ���� Chotyrykutnyk, ������� ������� �������������, ���� ������� ����� �� ��������
};

#endif
