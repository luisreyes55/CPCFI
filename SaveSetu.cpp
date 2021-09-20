#include <iostream>
using namespace std;

int main(){
    string tsn;
    int cases;
    int amount;
    int account = 0;
    cin >> cases;
    while(cases--){
    cin >> tsn;
        if(tsn=="donate"){
            cin >> amount;
            account += amount;
        }else
            cout<< account << endl;
    }
}