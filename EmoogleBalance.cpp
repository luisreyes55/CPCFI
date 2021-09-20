#include <iostream>
using namespace std;

int main(){
    int cases;
    int n; 
    int ite = 1;
    cin >> cases;
    while(cases > 0){
        int suptre = 0;
        int acttre = 0;
        int eb = 0;
        for(int i =0; i<cases; i++){
            cin >> n;
            if(n == 0){
                acttre++;
            }else{
                suptre++;
            }
        }
        eb = (suptre-acttre);
        cout << "Case "<< ite << ": " << eb << endl;
        ite++;
        cin >> cases;
        
    }
}