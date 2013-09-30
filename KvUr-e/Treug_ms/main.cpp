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
    cout<<"Введите коэффициенты a, b и c квадратного уравнения ax^2+bx+c=0:"<<endl;
    double a,b,c;
    cin>>a>>b>>c;
	//Проверяем на вырождаемость в линейное
	double x1,x2;
	if(!a){
		cout<<"Старший коэффициент равен нулю, уравнение вырождается в линейное."<<endl;
		if(b){
			if(!c){
				x1=0;
			}else{
				x1=-c/b;
			}
			cout<<"Уравнение имеет единственный корень "<<x1<<endl;
		}else{//b=0
			if(!c){
				cout<<"Любое число является корнем этого уравнения."<<endl;
			}else{
				cout<<"Уравнение корней не имеет."<<endl;
			}
		}
	}else{//Всё-таки квадратное
		if(!c){
			if(b){
				x1=0;
				x2=-b/a;
				cout<<"Уравнение имеет корни "<<x1<<" и "<<x2<<endl;
			}else{
				x1=0;
				cout<<"Уравнение имеет единственный корень "<<x1<<endl;
			}
		}else{
			double d=pow(b,2)-4*a*c;//Дискриминант
			if(d<0){
				cout<<"Уравнение вещественных корней не имеет."<<endl;
			}else{
				if(!d){
					x1=-b/2*a;
					cout<<"Уравнение имеет единственный корень "<<x1<<endl;
				}else{//d>0
					x1=(-b-sqrt(d))/(2*a);
					x2=(-b+sqrt(d))/(2*a);
					cout<<"Уравнение имеет корни "<<x1<<" и "<<x2<<endl;
				}
			}
		}
	}
    //}}Основная часть программы
	#ifdef _WIN32
		_getch();
	#endif
    return 0;
}

