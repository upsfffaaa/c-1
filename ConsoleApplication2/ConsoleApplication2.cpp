#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    char operation = ' ';
    double result, a, b;
    while (true) {
        cout << "Список действий: " << "\n Сложение +" << "\n Вычитание -" << "\n Умножение *" << "\n Деление /" << "\n Остаток от деления %" << "\n Фибоначи f" << "\n Выход из программы !\n";
        cout << "Введите действие: ";
        cin >> operation;
        if (operation == '!')
            return 0;
        if (operation == 'f') {
            cout << "Введите число: ";
            cin >> a;
            b = 1;
            int c, i, d = 0;
            if (a == 0)
                cout << a;
            else {
                cout << "0 ,1";
                for (i = 2; i <= a; i++)
                {
                    c = d + b;
                    d = b;
                    b = c;
                    cout << " ,";
                    cout << b;
                }
                cout << "\nКонечный результат: " << b;
            }
            cout << endl;
        }
        else {
            if ((operation == '-') || (operation == '+') || (operation == '/') || (operation == '*') || (operation == '%'))
            {
                cout << "Введите первое число: "; 
                   cin >> a;  
                    cout << "Введите второе число: ";
                    cin >> b;
                    switch (operation) {
                    case '-':
                        result = a - b;
                        cout << a << operation << b << "=" << result << endl;
                        break;
                    case '+':
                        result = a + b;
                        cout << a << operation << b << "=" << result << endl;
                        break;
                    case '*':
                        result = a * b;
                        cout << a << operation << b << "=" << result << endl;
                        break;
                    case '/':
                        if (b == 0)
                            cout << "На ноль делить нельзя";
                        else {
                            result = a / b;
                            cout << a << operation << b << "=" << result << endl;
                        }
                        break;
                    case '%':
                        int a1 = (int)a;
                        int b1 = (int)b;
                        if (b == 0)
                            cout << "На ноль делить нельзя";
                        else { cout << "Остаток: " << a1 % b1 << endl; }
                        break;
                    }
            }
           else cout << "Введите корректное действие\n";
        }
    }
}

        
 
        
       

    
