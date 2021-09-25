#include <bits/stdc++.h>
using namespace std;

#define fastIO          cin.tie(0); cout.tie(0);
#define endl            '\n'
#define FO(i, b)        for (int i = 0; i < (b); i++)
#define FOR(i, a, b)    for (int i = (a); i < (b); i++)
#define rFOR(i, a, b)   for (int i = (a); i > (b); i--)
#define TR(v, arr)      for(auto& (v) : (arr))
#define pint(x)         printf("%d\n", x);
#define pll(x)          printf("%lld\n", x);
#define si(x)           scanf("%d", &x);
#define sl(x)           scanf("%lld", &x);
#define all(x)          x.begin(), x.end()

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int, int> ii;
typedef vector<ii> vii;

void setIO() {
    string file = __FILE__;
    file = string(file.begin(), file.end()-3);
    string input_file = file + "in";
    string output_file = file + "out";
    freopen(input_file.c_str(), "r", stdin);
    freopen(output_file.c_str(), "w", stdout);
}

// -----------------------------------------------------------------------------
// Here begins our solution
// -----------------------------------------------------------------------------

void solve() {
    int L,N;
    vector<string> iwa;
    cin >> L >> N;
    while(L--){
        for(int i=0; i<2; i++){
            string iw;
            cin >> iw;
            iwa.push_back(iw);
        }        
    }
    while(N--){
        string iw;
        string aux;
        int band = 0;
        char lc,apc;
        cin >> iw;
        lc = iw.back();
        apc = iw.at(iw.length()-2);
        for (int i = 0; i < iwa.size(); i++) {
            if(iwa[i]==iw){
                cout << iwa[i+1] << endl;
                band++; 
                break;
            }
        }
        if(lc == 'y' && apc != 'a' && apc != 'e' && apc != 'i' && apc != 'o' && apc != 'u' ){
            iw.erase(iw.begin() + (iw.length()-1));
            cout << iw << "ies" << endl;
        }else if(band == 0 && (lc == 'o' || lc == 's' || lc == 'x' || (lc == 'h' && (apc =='c' || apc =='s')))){
            cout << iw << "es" << endl;
        }else{
            if(band<=0){
                cout << iw << "s" << endl;
            }
            
        }

    
    }
    

}

int main() {
    if (getenv("CP_IO")) { setIO(); }
    int T=1;
    FO(tc, T){
        solve();
    }
    return 0;
}