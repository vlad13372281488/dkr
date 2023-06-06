#ifndef CHOTYRYKUTNYK_H
#define CHOTYRYKUTNYK_H

#include <string>

class Chotyrykutnyk {
private: // ������� ���� � ����� ����� Chotyrykutnyk
    double side1; // ����� ������� �������������
    double side2; // ����� ������� �������������
    double side3; // ����� ������� �������������
    double side4; // �������� ������� �������������

public:
    Chotyrykutnyk(); // ����������� �� �������������
    Chotyrykutnyk(double s1, double s2, double s3, double s4); // �����������, ���� ������ ������ ���������, ��������������� ��� ��������� ��'���� Chotyrykutnyk � ��������������� ���������� �����

    double getSide1() const; // ����� ��� ��������� �������� ����� �������
    double getSide2() const; // ����� ��� ��������� �������� ����� �������
    double getSide3() const; // ����� ��� ��������� �������� ������ �������
    double getSide4() const; // ����� ��� ��������� �������� �������� �������

    double calculateArea() const; // ����� ��� ���������� ����� �������������
    double calculatePerimeter() const; // ����� ��� ���������� ��������� �������������
    std::string calculateType() const; // ����� ��� ���������� ���� ������������� (�����)
};

#endif
