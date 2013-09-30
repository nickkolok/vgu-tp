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
    //{{�������� ����� ���������
    cout<<"������� ������������ a, b � c ����������� ��������� ax^2+bx+c=0:"<<endl;
    double a,b,c;
    cin>>a>>b>>c;
	//��������� �� ������������� � ��������
	double x1,x2;
	if(!a){
		cout<<"������� ����������� ����� ����, ��������� ����������� � ��������."<<endl;
		if(b){
			if(!c){
				x1=0;
			}else{
				x1=-c/b;
			}
			cout<<"��������� ����� ������������ ������ "<<x1<<endl;
		}else{//b=0
			if(!c){
				cout<<"����� ����� �������� ������ ����� ���������."<<endl;
			}else{
				cout<<"��������� ������ �� �����."<<endl;
			}
		}
	}else{//��-���� ����������
		if(!c){
			if(b){
				x1=0;
				x2=-b/a;
				cout<<"��������� ����� ����� "<<x1<<" � "<<x2<<endl;
			}else{
				x1=0;
				cout<<"��������� ����� ������������ ������ "<<x1<<endl;
			}
		}else{
			double d=pow(b,2)-4*a*c;//������������
			if(d<0){
				cout<<"��������� ������������ ������ �� �����."<<endl;
			}else{
				if(!d){
					x1=-b/2*a;
					cout<<"��������� ����� ������������ ������ "<<x1<<endl;
				}else{//d>0
					x1=(-b-sqrt(d))/(2*a);
					x2=(-b+sqrt(d))/(2*a);
					cout<<"��������� ����� ����� "<<x1<<" � "<<x2<<endl;
				}
			}
		}
	}
    //}}�������� ����� ���������
	#ifdef _WIN32
		_getch();
	#endif
    return 0;
}

