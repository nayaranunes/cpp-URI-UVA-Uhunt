#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
  	
  	int ultimo = -1000, cont = 1, maior = 0;
  
	for (int i = 0; i < n; i++) {
    
		int b;
		cin >> b;

		if (b == ultimo) {

			cont ++;
			cout << "b"<< b <<endl;
			cout << "ultimo"<< ultimo <<endl;
			cout << "cont"<< cont <<endl;
			cout << "maior"<< maior <<endl;
		} else {
			
			cont = 1;
		}
		ultimo = b;
		if (cont > maior) {
			maior = cont;
		} 
	}

	cout << maior << endl;
	return 0;
}
