#include "Logger.h"

void check(Logger& logger, int L, int K){//функція яка перевіряє чи правильно ввели число

    if (L<1||L>K){//перевірка
       logger.log("Input error");//запис у файл повідомлення про помилку
    }
}


    void Logger::log(const string& message) {//ця функція використовується для запису тексту в файл
        if (logfile_.is_open()) {//перевіряє чи відкритий для записування даних в файл якщо так то повертає True і далі робить

            logfile_ << message << endl;// Запис повідомлення в файл
        }
    }
