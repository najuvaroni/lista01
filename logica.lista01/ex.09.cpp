#include <iostream>
#include <cmath>

using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	int num, original_num, resto , n = 0,  soma = 0;
	cout << "Digite um n�mero inteiro: ";
	cin >> num;
	original_num;
	while (original_num != 0) {
	 original_num /= 10;
	 ++n;
	}
	original_num = num ;
	while (original_num != 0){
		resto = original_num % 10;
		soma += pow(resto, n);
		original_num /= 10;
	}
	if (soma == num){
		cout << num << " � um n�mero de Armstrong." << endl;
	}
	
	else {
		cout  << num << "n�o � um n�mero de Armstrong." << endl; 
		return 0;
	}  
}

