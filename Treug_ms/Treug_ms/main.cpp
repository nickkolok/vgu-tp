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
	cout.setf(ios_base::fixed,ios_base::floatfield);
    cout<<"������� ������� ������������:"<<endl;
    double stor1,stor2,stor3;
    cin>>stor1>>stor2>>stor3;
	//double st1,st2,st3;
    double st1,st2,st3;
    //������������� �������. st1<=st2<=st3

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
		if(stor3>=stor1){//stor3 - ��������, stor2 - �������
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
		cout<<"������� ������ ���� ��������������."<<endl;
	}
	else{
		//��������� �� ������������ ����������� ������������
		if(st3>st1+st2){
			cout<<"����������� � ������ ��������� �� ����� ������������."<<endl;
		}
		else
			if(st3==st1+st2){
				cout<<"����������� � ������ ��������� ����������� � �������."<<endl;
			}
		else{
			//�� � �������, ��� �����������
			//���������� ���: �������������, ������������, �������������
			if(pow(st3,2)==pow(st1,2)+pow(st2,2)){
				cout<<"����������� �������������. "<<st3<<" - ����������, "
				   <<st1<<" � "<<st2<<" - ������."<<endl;
			}
			else
				if(pow(st3,2)<pow(st1,2)+pow(st2,2)){
					cout<<"����������� �������������."<<endl;
				}
				else{
					cout<<"����������� �����������."<<endl;
				}

			//� �� �������������� ��?
			if(st1==st3){//������� �����������, st2 ����� �� �������
				cout<<"����������� ��������������."<<endl;
			}
			else
				if(st1==st2 || st2==st3){
					//�� ����� ����, ���� �� ��������������?
					cout<<"����������� ��������������."<<endl;
				}

			//������ ������� �������.
			double p=(st1+st2+st3)/2;//������������
			double s=sqrt(p*(p-st1)*(p-st2)*(p-st3));
			cout<<"������� ������������ ����� "<<s<<"."<<endl;
		}
	}
    //}}�������� ����� ���������
	#ifdef _WIN32
		_getch();
	#endif
    return 0;
}

