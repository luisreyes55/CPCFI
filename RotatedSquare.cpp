#include <iostream>

#include <vector>
using namespace std;

#define fast ios::sync_with_stdio(0);cin.tie(0);


int main(){
    fast;
    string word;
    int N,n;

    cin >> N;
    char square[N][N];
    char squaresm[n][n];
    
    for(int i=0; i<N; i++){
        cin >> word;
        for(int j=0; j<N; j++){
            square[i][j] = word.at(j); 
        }
    }

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> word;
        for(int j=0; j<n; j++){
            square[i][j] = word.at(j); 
            cout << "array: " << square[i][j] << endl; 
        }
    }

    
   

    
    


}