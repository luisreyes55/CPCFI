#include <iostream>
using namespace std;

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

void solve() {
   
}

int main() {
    int a,b,c,d,l;
    cin >> a >> b >> c >> d >> l;

    while(a != 0 || b != 0 || c != 0 || d != 0 || l != 0){
        int fx = 0;
        int cont = 0;

        for(int i=0; i<=l ; i++){
            fx = (a*(i*i)+b*(i)+c);
            if(fx%d == 0){
                cont++;
            }else{
                continue;
            }
        }
    cout << cont << endl;
    cin >> a >> b >> c >> d >> l;
    }

}