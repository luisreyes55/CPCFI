#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	//Entradas
	int months, payrec;
	double downP, loan;
	double depR[101];

	//Leer datos
	while(true){
	cin >> months >> downP >> loan >> payrec;
		if(months < 0 ){
			break;
		}

		int month;
		double dep;
		
		while(payrec--){
			cin >> month >> dep;
			for(int i= month; i<101; i++){
				depR[i] = dep;
			}
		}

		int currmonth = 0;
		double monthP = loan/months;
		double carV = (loan + downP)*(1-depR[0]);
		double curLoan = loan;

		while(carV<curLoan){
			currmonth++;
			curLoan -= monthP;
			carV *= (1-depR[currmonth]);
		}

		cout << currmonth << " month";
		if(currmonth != 1){
			cout <<"s";
		}
		cout << endl;
	}
}
 