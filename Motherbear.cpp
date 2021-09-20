#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    string s;
    
    getline(cin,s);
    while(s != "DONE"){
        string strn;
        string palin;
        for_each(s.begin(), s.end(), [](char &c){
        c = tolower(c);});
        for(int i=0; i<s.size(); i++){
            if(s[i]==' '){
                continue;
            }if(s[i]=='.'){
                continue;
            }if(s[i]==','){
                continue;
            }if(s[i]=='!'){
                continue;
            }if(s[i]=='?'){
                continue;
            }
            strn += s[i]; 
        }
        
        for(int i=s.size()-1; i >= 0 ; i--){
            if(s[i]==' '){
                continue;
            }if(s[i]=='.'){
                continue;
            }if(s[i]==','){
                continue;
            }if(s[i]=='!'){
                continue;
            }if(s[i]=='?'){
                continue;
            }
            palin += s[i]; 
        }
        if(strn == palin){
            cout << "You won't be eaten!" << endl;
        }else{
            cout << "Uh oh.." << endl;
        }
      getline(cin,s);
    }
}