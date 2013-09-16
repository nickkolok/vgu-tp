#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
    #include <conio.h>
#endif

using namespace std;

int main()
{
    #ifdef _WIN32
        setlocale(LC_ALL, "Russian");
    #endif
    //{{Основная часть программы

    float c;//Температура по Цельсию
    cout<<"Введите температуру в градусах Цельсия:"<<endl;
    cin>>c;
    cout<<"Это "<<32+0.8*c<<" град. по Фаренгейту"<<endl;

    //}}Основная часть программы
    #ifdef _WIN32
        _getch();
    #endif
    return 0;
}
