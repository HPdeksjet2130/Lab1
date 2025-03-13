#include <iostream>
#include <cmath>

#include"rectangle.h"
#include"triangle.h"
#include"circle.h"

using namespace std;


int main()
{
    float side1, side2, side3, rad, alpha;
    int cases;
    cout << "Введите номер фигуры: 1 - прямоугольник, 2 - треугольник, 3 - окружность.\n";
    cin >> cases;
    switch (cases)
    {
        case 1:
            cout << "Введите сторону №1: ";
            cin >> side1;
            cout << "Введите сторону №2: ";
            cin >> side2;
            rectangle(side1, side2);
            break;
        case 2:
            cout << "Введите сторону №1: ";
            cin >> side1;
            cout << "Введите сторону №2: ";
            cin >> side2;
            cout << "Введите сторону №3: ";
            cin >> side3;
            triangle(side1, side2, side3);
            break;
        case 3:
            cout << "Введите радиус: ";
            cin >> rad;
            cout << "Угол сектора: ";
            cin >> alpha;
            circle(rad, alpha);
            break;
    }
    return 0;
}