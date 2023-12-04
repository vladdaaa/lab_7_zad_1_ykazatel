// lab_7_zad_1_ykazatel.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

void plosh(int a, int b, int* pl);

int main(void)
{
    int a1, b1, a2, b2, a3, b3;
    int pl;
    setlocale(LC_ALL, "ru");

    cout << "Укажите первую сторону прямоугольника1:";
    cin >> a1;
    cout << "Укажите вторую сторону прямоугольника1:";
    cin >> b1;

    plosh(a1,b1, &pl);
    cout <<"Площадь прямоугольника1:"<< pl << endl;

    cout << "Укажите первую сторону прямоугольника2:";
    cin >> a2;
    cout << "Укажите вторую сторону прямоугольника2:";
    cin >> b2;

    plosh(a2, b2, &pl);
    cout << "Площадь прямоугольника2:" << pl << endl;

    cout << "Укажите первую сторону прямоугольника3:";
    cin >> a3;
    cout << "Укажите вторую сторону прямоугольника3:";
    cin >> b3;

    plosh(a3, b3, &pl);
    cout << "Площадь прямоугольника3:" << pl << endl;
}
void plosh(int a, int b, int* pl) {

    *pl = 0;
    *pl = a * b;
}
