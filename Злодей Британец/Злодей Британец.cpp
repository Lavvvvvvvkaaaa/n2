#include <iostream>
#include <cmath>


short addition(short a, short b) {
    return a + b;
}


short subtraction(short a, short b) {
    return a - b;
}


short division(short a, short b) {
    return a / b;
}


short multiplication(short a, short b) {
    return a * b;
}

short exponentiation(short a, short b) {
    return pow(a, b);
}


short squareRoot(short a) {
    return sqrt(a);
}


short percent(short a) {
    return a / 100;
}


short factorial(short a) {
    if (a == 0)
        return 1;
    else
        return a * factorial(a - 1);
}

int main() {
    int choice;
    short num1, num2;

    while (true) {
        std::cout << "Выберите операцию: " << std::endl;
        std::cout << "1. Сложение" << std::endl;
        std::cout << "2. Вычитание" << std::endl;
        std::cout << "3. Частное" << std::endl;
        std::cout << "4. Произведение" << std::endl;
        std::cout << "5. Возведение в степень" << std::endl;
        std::cout << "6. Нахождение квадратного корня" << std::endl;
        std::cout << "7. Нахождение 1 процента от числа" << std::endl;
        std::cout << "8. Найти факториал числа" << std::endl;
        std::cout << "9. Выйти из программы" << std::endl;
        std::cout << "Введите номер операции: ";
        std::cin >> choice;

        if (choice == 9) {
            break;
        }

        switch (choice) {
        case 1:
            std::cout << "Введите первое число: ";
            std::cin >> num1;
            std::cout << "Введите второе число: ";
            std::cin >> num2;
            std::cout << "Результат: " << addition(num1, num2) << std::endl;
            break;
        case 2:
            std::cout << "Введите первое число: ";
            std::cin >> num1;
            std::cout << "Введите второе число: ";
            std::cin >> num2;
            std::cout << "Результат: " << subtraction(num1, num2) << std::endl;
            break;
        case 3:
            std::cout << "Введите первое число: ";
            std::cin >> num1;
            std::cout << "Введите второе число: ";
            std::cin >> num2;
            std::cout << "Результат: " << division(num1, num2) << std::endl;
            break;
        case 4:
            std::cout << "Введите первое число: ";
            std::cin >> num1;
            std::cout << "Введите второе число: ";
            std::cin >> num2;
            std::cout << "Результат: " << multiplication(num1, num2) << std::endl;
            break;
        case 5:
            std::cout << "Введите число: ";
            std::cin >> num1;
            std::cout << "Введите степень: ";
            std::cin >> num2;
            std::cout << "Результат: " << exponentiation(num1, num2) << std::endl;
            break;
        case 6:
            std::cout << "Введите число: ";
            std::cin >> num1;
            std::cout << "Результат: " << squareRoot(num1) << std::endl;
            break;
        case 7:
            std::cout << "Введите число: ";
            std::cin >> num1;
            std::cout << "Результат: " << percent(num1) << std::endl;
            break;
        case 8:
            std::cout << "Введите число: ";
            std::cin >> num1;
            std::cout << "Результат: " << factorial(num1) << std::endl;
            break;
        default:
            std::cout << "Ошибка";
        }
    }