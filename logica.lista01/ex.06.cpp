#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	int num, soma = 0 ;
	cout << "Digite um n�mero inteiro de tr�s digitos: ";
	cin >>num;
	
	 if (num >= 100 && num <= 999) {
	 	soma += num/100;
	 	num %= 100;
	 	soma += num / 10;
	 	num %= 10;
	 	soma += num;
		cout << " A soma dos digitos �: " << soma << endl;
	}
	else{
		cout << "N�mero inv�lido" << endl;
	}
	return 0;
}
