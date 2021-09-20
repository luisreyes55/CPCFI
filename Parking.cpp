#include <iostream>
#include <vector>
#include<algorithm>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){
    int cases;
    int stores;
    int d;
    int min;
    int max; 
    int out;
    vector<int> arr;
    cin >> cases;

     while(cases--){
         
        cin >> stores;
        for(int i=0; i<stores; i++){
             cin >> d;
             arr.push_back(d);
        }
        min = *min_element(arr.begin(), arr.end());
        max = *max_element(arr.begin(), arr.end());
        out = (max - min)*2;
        cout << out << endl;
        arr.clear();
    }


}