#include <iostream>

using namespace std;

main(){
setlocale(LC_ALL, "Portuguese");
	float salario, aumento;
	string name;
	cout << "Informe seu nome:";
	cin >> name;

	cout << "informe o seu sal�rio: ";
	cin >> salario;
	
	if(salario <= 1500 ){
		cout << "Sal�rio era: "<< salario << "Passou a ser: "<< aumento;
		aumento = salario * 1.10;
	} 
	else if(salario > 1500){
		aumento = salario * 1.5;
		cout<< "Sal�rio era " << salario << " e passou a ser " << aumento;
	}	
}
	
	
