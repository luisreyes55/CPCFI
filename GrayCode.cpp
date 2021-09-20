#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){

	vector<string> arr;
 
    // start with one-bit pattern
    arr.push_back("0");
    arr.push_back("1");
    
    for (int i = 0 ; i < arr.size() ; i++ )
        cout << arr[i] << endl;
}
    
