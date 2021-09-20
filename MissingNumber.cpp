#include <iostream>
using namespace std;

/*long long int fact(int i){
	if (i <= 1) return 1;
  	else return i*fact(i-1);
}*/

int main(){
	int n;
	int x;
	int misn;
	int suman =0;
	int total = 0;
	cin >> n;
	
	for(int i=1; i<=n; i++){
		total += i;	
			
	}
	
	for(int j=0; j<n-1; j++){
		cin >> x;
		suman += x;		
		}
	misn = total - suman;
	cout << misn;
}


/*	long long int factorial;
	long long int total = 1;
	
	cin >> n;
	factorial = fact(n);
	
	for(int i=0; i<n-1; i++){
		cin >> x;
		total = x * total;
		
	}
	
	misn = factorial/total;
	cout << misn;
*/	