
#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, num3, menor, meio, maior;
	cout << "Digite tr�s n�meros inteiros: ";
	cin >> num1, num2, num3;
	
	if (num1 <= num2 && num1 <= num3){
		menor = num1;}
	else if (num2 <= num1 && num2 <= num3){
		menor = num2;
	}
	
	if (num1 >= num2 && num1 >= num3){
		maior = num1;
	}	
	else if( num2 >= num1 && num2 >= num3 ){
		maior = num2;
	}
	else{
		maior = num3;
	}
	if ((num1 > menor && num1 < maior)|| (num1 < menor && num1 > maior)){
		meio = num1;
	}
	else if  ((num1 > menor && num1 < maior)|| (num1 < menor && num1 > maior)){
		meio = num2;
	}
	else{
		meio = num3;
	}
	cout << "os n�meros em ordem crescente s�o: " << menor << ", "<< meio << " e " << maior << endl;
	return 0;
	
}
