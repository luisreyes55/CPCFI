#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int cases;
    cin >> cases;
    while(cases>0){
        int n,m;
        cin >> n >> m;
        for(int i=0; i<cases;i++){
            int x,y;
            cin >> x >> y;
            if((n<x) && y>m){
                cout << "NE" << "\n";
            }if(((n<x || n>x || n==x ) && y==m) || ((m<y || m>y || m==y) && x ==n) ){
                cout << "divisa" << "\n";
            }if(n<x && y<m){
                cout << "SE" << "\n";
            }if((n>x) && y>m){
                cout << "NO" << "\n"; 
            }if((n>x) && y<m){
                cout << "SO" << "\n";
            }

        }
    cin >> cases;
    }


}