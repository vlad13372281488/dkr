#include "Logger.h"

void check(Logger& logger, int L, int K){//������� ��� �������� �� ��������� ����� �����

    if (L<1||L>K){//��������
       logger.log("Input error");//����� � ���� ����������� ��� �������
    }
}


    void Logger::log(const string& message) {//�� ������� ��������������� ��� ������ ������ � ����
        if (logfile_.is_open()) {//�������� �� �������� ��� ����������� ����� � ���� ���� ��� �� ������� True � ��� ������

            logfile_ << message << endl;// ����� ����������� � ����
        }
    }
