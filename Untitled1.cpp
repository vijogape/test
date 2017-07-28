#include <iostream>

using namespace std;

int main()
{
	string name;
	float num1, num2, num3;
	double tot;
	int opt;
	
	cout<<"Escribe tu nombre aqui"<<endl;
	cin>>name;
	cout<<"Pon tu primer numero"<<endl;
	cin>>num1;
	cout<<"Pon tu segundo numero"<<endl;
	cin>>num2;
	cout<<"elige el numero de la opracion que quieres realizar"<<endl<<"1.suma"<<endl<<"2.resta"<<endl<<"3.multiplicacion"<<endl<<"4.division"<<endl;
	cin>>opt;
	system("cls");
	
	switch(opt)
	{
		case 1:
		tot=num1+num2;
		cout<<tot;
		break;	
		case 2:
		tot=num1-num2;
		cout<<tot;
		break;	
		case 3:
		tot=num1*num2;
		cout<<tot;
		break;	
		case 4:
		tot=num1/num2;
		cout<<tot;
		break;	
	}
	
}
