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
    int question;
    while(scanf("%d", &question)>0){
        vector<char> insc = {'A','B','C','D','E'};
            while(question--){
                int black=0; int white=0;
                char chas = 'v';
                for(int i=0; i<5; i++){ 
                    int ans;
                    si(ans);
                    if(ans <= 127 && black == 0){
                        chas = insc[i];
                        black++;
                    }else if(ans >127){
                        white++;
                    }else if(black>=1 && chas != 'v'){
                        black++;
                    }else{
                        white++;
                    }
                }
                if(black>1){    
                    printf("*\n");
                }else if(white == 5){
                    printf("*\n");
                }else{  
                    printf("%c\n",chas);
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