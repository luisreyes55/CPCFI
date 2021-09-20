#include <iostream>
using namespace std;

void digittensColumn(int n){
    int outnum;
    string num;
    char digit;
    outnum = (((((n*567)/9)+7492)*235)/47)-498;
    num = to_string(outnum);
    digit = num.at(num.size()-2);
    cout << digit << endl;
}

int main(){
    int n;
    int x; 
    cin >> n;
    while (n--){
        cin >> x;
        digittensColumn(x);
    }
}