#include <iostream>
#include <fstream>
using namespace std;  //std - �� ������ ����  ������ ������ �����, ������� � ��'����, �� ��������� � ����������� �������� � ������ ���� ����������� � ��������� C++.

class Logger {
private:
    ofstream logfile_; //�������� ����� ��� ������ | ofstream - � ������ � ����������� ��������
                        //C++ (������a fstream), ���� ��������������� ��� ������ ����� � ����.

public:
    Logger(const string& filename) {       //�������� ����������� �����
        logfile_.open(filename, ios::app);//³������� ����� ��� ������\\ios::app �������� �������� ��� ���� � ����� �����, ��������� ��� ������� ����.
    }

    Logger() : logfile_() {} // ����������� �� �������������

    ~Logger() {     //~� ������������ ����� Logger
        if (logfile_.is_open()) {//�������� �� �������� ��� ����������� ����� � ���� ���� ��� ��
                                //������� True � ��� ������� ���� � ��� ����� ��'���.
            logfile_.close(); // �������� ����� ����� ��������� ��'����
        }
    }

    void log(const string& message);//�� ������� ��������������� ��� ������ ������ � ����
};
    void check(Logger& logger, int L, int K);//������� ��� �������� �� ��������� ����� �����
