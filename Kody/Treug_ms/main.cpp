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

    cout<<"��� ����������� ��������� ��� ����������� �������� ��������� "<<endl
		<<"�� ���� ����������� ������:"<<endl
		<<"������� ���. (������, ������ � �������� ����� ������, "<<endl
		<<"���������� ��� �������� � ������ ����������. ��������, ��� ������"<<endl
		<<" 89123456789 ��� ����� 912"<<endl
		<<"����� ��� ���������� � ���������: 8 (912) 345-67-89 )"<<endl;
	int kod;
	cin>>kod;
	switch(kod){
		case 902:
		case 905:
		case 910:
		case 911:
		case 912:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
			cout<<"���������� ����� ����������� ��������� \"MTC\".";
			break;
		case 903:
		case 906:
		case 960:
		case 961:
		case 962:
		case 963:
		case 964:
		case 965:
		case 966:
		case 967:
		case 968:
		case 969:
			cout<<"���������� ����� ����������� ��������� \"���a��\".";
			break;
		case 904:
		case 908:
		case 950:
		case 951:
		case 952:
		case 953:
		case 954:
		case 955:
		case 956:
		case 957:
		case 958:
		case 959:
			cout<<"���������� ����� ����������� ��������� \"TE�E2\".";
			break;
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
			cout<<"���������� ����� ����������� ��������� \"Me�a�o�\".";
			break;
		default:
			cout<<"He ������� ���������� ���������, �������� ����������� �����.";
			break;
	};
	//}}�������� ����� ���������
	cout<<endl;
	#ifdef _WIN32
		_getch();
	#endif
    return 0;
}

