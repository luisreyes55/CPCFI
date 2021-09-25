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
#define fastIO ios::sync_with_stdio(0);cin.tie(0);
    
int main() {
    fastIO;
    int roads, integers;
    int ite = 1;
    cin >> roads >> integers;
    while(roads != 0 && integers != 0){
        int c = 0;
        int res = 0;
        int x = 0;
        res = roads - integers;
 //       cout << "res = " << res << endl;
        if(res <= 0){
            cout << "0" << endl;
        }else{
            FOR(i,1,27){
                x = integers*i;
                if(x >= res){
                    cout << "Case " << ite << ": " << i << endl;
                    break;
                }else if( i == 26){
                    cout << "Case " << ite << ": impossible" << endl;
                }
                else{
                    continue;
                } 
            }
     
        }
    ite++;
    cin >> roads >> integers;
    //cout << "Lei :" << roads << " "<< integers  << endl;
    }
    return 0;
}