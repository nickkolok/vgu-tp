#include <iostream>
#include <clocale>
#include <cmath>
#ifdef _WIN32
	#include <conio.h>
#endif

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    //{{Основная часть программы
	cout.setf(ios_base::fixed,ios_base::floatfield);
    cout<<"Введите стороны треугольника:"<<endl;
    double stor1,stor2,stor3;
    cin>>stor1>>stor2>>stor3;
	//double st1,st2,st3;
    double st1,st2,st3;
    //Упорядочиваем стороны. st1<=st2<=st3

/*	double buf;
    if(st1>st2){
        buf=st1;
        st1=st2;
        st2=buf;
    }
    if(st1>st3){
        buf=st1;
        st1=st3;
        st3=buf;
    }
    if(st2>st3){
        buf=st2;
        st2=st3;
        st3=buf;
    }
*/
	if(stor1<=stor2){
		if(stor2<=stor3){
			st1=stor1;
			st2=stor2;
			st3=stor3;
		}else{//stor1<=stor2 stor2>stor3
			st3=stor2;
			if(stor1<=stor3){
				st1=stor1;
				st2=stor3;
			}else{
				st1=stor3;
				st2=stor1;
			}
		}
	}else{//stor1>stor2
		if(stor3>=stor1){//stor3 - максимум, stor2 - минимум
			st1=stor2;
			st2=stor1;
			st3=stor3;
		}else{//stor1>stor2 stor1>stor3
			st3=stor1;
			if(stor2<=stor3){
				st2=stor3;
				st1=stor2;
			}else{
				st1=stor3;
				st2=stor2;
			}
		}
	}
	
	if(st1<0){
		cout<<"Стороны должны быть неотрицательны."<<endl;
	}
	else{
		//Проверяем на соответствие неравенству треугольника
		if(st3>st1+st2){
			cout<<"Треугольник с такими сторонами не может существовать."<<endl;
		}
		else
			if(st3==st1+st2){
				cout<<"Треугольник с такими сторонами вырождается в отрезок."<<endl;
			}
		else{
			//Всё в порядке, это треугольник
			//Определяем вид: прямоугольный, тупоугольный, остроугольный
			if(pow(st3,2)==pow(st1,2)+pow(st2,2)){
				cout<<"Треугольник прямоугольный. "<<st3<<" - гипотенуза, "
				   <<st1<<" и "<<st2<<" - катеты."<<endl;
			}
			else
				if(pow(st3,2)<pow(st1,2)+pow(st2,2)){
					cout<<"Треугольник остроугольный."<<endl;
				}
				else{
					cout<<"Треугольник тупогольный."<<endl;
				}

			//А не равносторонний ли?
			if(st1==st3){//Стороны упорядочены, st2 можно не трогать
				cout<<"Треугольник равносторонний."<<endl;
			}
			else
				if(st1==st2 || st2==st3){
					//Ну может быть, хотя бы равнобедренный?
					cout<<"Треугольник равнобедренный."<<endl;
				}

			//Теперь считаем площадь.
			double p=(st1+st2+st3)/2;//Полупериметр
			double s=sqrt(p*(p-st1)*(p-st2)*(p-st3));
			cout<<"Площадь треугольника равна "<<s<<"."<<endl;
		}
	}
    //}}Основная часть программы
	#ifdef _WIN32
		_getch();
	#endif
    return 0;
}

