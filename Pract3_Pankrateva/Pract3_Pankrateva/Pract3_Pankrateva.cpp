#include <iostream>
#include <cmath>


using namespace std;

//1 задание
#define t1 10
#define z1 3 * t1
#define y1 cos(t1 + z1)

#define x1 4 * log10(pow(y1, -2)) - z1 / t1

//2 задание

#define x2 0.27
#define y2 4.38
#define e2 2.71828

#define z2 (x2 + y2 * sqrt(y2)) / (x2 + 10)
#define b2 ((4 * pow(y2,2) * pow(e2, 3 * x2)) / (8 * pow(z2, 3) + log10(fabs(x2))))


int main()
{
    setlocale(LC_ALL, "Russian");
    int zadanie;
    cout << "Введите номер задания (1, 2 или 3) \n";    
    cin >> zadanie;
    if (zadanie == 1)
    {
        double result = x1;
        std::cout << "Значение функции: " << result << std::endl;
    }
    else if (zadanie == 2)
    {
        double result = b2;
        std::cout << "Значение функции: " << result << std::endl;
    }
    else if (zadanie == 3)
    {
        std::cout << "Введите значение  a: ";
        double a;
        double PI = 3.14;
        std::cin >> a;

        double y = 0.25 - 0.25 * sin(2.5 * PI - 8 * a);

        std::cout << "Значение функции y = " << y << std::endl;
    }
    else
    {
        cout << "Введите номер задания (1, 2 или 3) \n";
    }
}
