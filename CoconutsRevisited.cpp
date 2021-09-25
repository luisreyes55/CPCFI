#include <stdio.h>
#include <math.h>

int main() {
    int n;
    while(scanf("%d", &n) == 1 && n >= 0) {
        printf("%d coconuts, ", n);
        int sol = 0, i, j;
        int sq = (int)sqrt(n)+1;
        for(i = sq; i >= 2; i--) {
            int ans = n;
            for(j = 1; j <= i; j++) {
                if(ans%i != 1)
                    break;
                ans = ans - ans/i - 1;
            }
            if(j == i+1 && ans%i == 0) {
                sol = 1;
                printf("%d people and 1 monkey\n", i);
                break;
            }
        }
        if(!sol)
            puts("no solution");
    }
    return 0;
}/*#include <stdio.h>
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
    int cocos;
    si(cocos);
    while(cocos > 0){
        int p = 2;    
        int auxc = cocos;
        if(cocos%2 == 0){
            cout << cocos << " coconuts, no solution" << endl;
        }else{
            while(p >= 2){
                cocos = auxc;
                int lcocos = 0;
                rFOR(i,p,-1){
                    lcocos = cocos/p;
                    cout << "lxoxos: " << lcocos << endl;
                    break;
                    if(lcocos*p == cocos-1){
                        cocos = lcocos*(p-1);     
                    }if(cocos%p == 0 && i==0){
                        cout << auxc << " coconuts, " << p << " people and 1 monkey"<< endl;
                        p = 0;
                        break;
                    }else{
                        p++;
                        break;
                    }           
                }
            }
        }    
    si(cocos);
    }
}

int main() {
    int T=1;
    FO(tc, T){
        solve();
    }
    return 0;
}*/