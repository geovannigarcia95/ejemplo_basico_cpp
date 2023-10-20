/*Practica 4 Ejecute el programa y corrija segun sea necesario*/
#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Spanish");
	char sex[10];
	char nmbre [10];
	char edad [10];
	float altura;
	cout<<"Cual es su edad?: "; 
	cin>>edad;
	cout<<"Cual es su altura en metros?: "; 
	cin>>altura;
	cout<<"Cual su primer nombre?: ";
	cin>>nmbre;
	cout<<"Cual es su sexo?: ";
	cin>>sex;

	cout<<"Edad: "<<edad<<endl;
	cout<<"Sexo: "<<sex<<endl;
	cout<<"Su altura es : "<<altura<<endl;
	cout<<"Sus datos son:"<<edad <<"Años "<<altura<<"mts ""nombre:"<<nmbre<<" sexo:"<<sex<<" "<<endl;
	return 0;
}
