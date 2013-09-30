#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main(){
	srand(time(NULL));
/*	int n=0x80000000;
	cout<<n<<endl;
	cout<<-n<<endl;
	if(n>=0)
		return 1;
	if(-n>=0)
		return 2;
	std::cout<<"123";
*/
/*0:00.95*//*
	int i=0;
	for(;i<10000000;i++){
		double c1,c2,c3;
		c1=random();
		c2=rand();
		c3=rand();
		double a1,a2,a3;
		a1=c1;
		a2=c2;
		a3=c3;
		double buf;
		if(a1>a2){
			buf=a1;
			a1=a2;
			a2=buf;
		}
		if(a1>a3){
			buf=a1;
			a1=a3;
			a3=buf;
		}
		if(a2>a3){
			buf=a2;
			a2=a3;
			a3=buf;
		}
 		if(a1>a2 || a2>a3)
			cout<<"Error";

	}
*/
	int i=0;
	for(;i<10000000;i++){
//	for(;i<100;i++){
		double c1,c2,c3;
		c1=rand();
		c2=rand();
		c3=rand();
		double a1,a2,a3;
		
		if(c1<=c2){
			if(c2<=c3){
				a1=c1;
				a2=c2;
				a3=c3;
			}else{//c1<=c2 c2>c3
				a3=c2;
				if(c1<=c3){
					a1=c1;
					a2=c3;
				}else{
					a1=c3;
					a2=c1;
				}
			}
		}else{//c1>c2
			if(c3>=c1){//c3 - максимум, c2 - минимум
				a1=c2;
				a2=c1;
				a3=c3;
			}else{//c1>c2 c1>c3
				a3=c1;
				if(c2<=c3){
					a2=c3;
					a1=c2;
				}else{
					a1=c3;
					a2=c2;
				}
			}
		}
	}

	cin>>i;
	return 0;
}
