#include <iostream>
//#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){
  //optimizar_io
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int cases;
    cin >> cases;
    
    while(cases--){
        long long a,b;
        long long sra;
        long long srsa;
        long long srb;
        long long srsb;
        cin >> a >> b;
        a -= 2;
        b -= 2;
        sra = a/3;
        srsa = a%3;
        if(srsa>0){
            sra++;
        }
        srb = b/3;
        srsb = b%3;
        if(srsb>0){
            srb++;
        }
        cout << sra*srb <<"\n";
    }


}