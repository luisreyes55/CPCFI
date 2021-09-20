#include <iostream>


using namespace std;

int main(){
    string input;
    cin >> input;
	//scanf("%s",input);
    int c=0, large = 1;
    char inpc = 'A';

    for(char i:input){
        if(i == inpc){
            c++;
            large = max(large,c);
        }else{
            inpc = i;
            c = 1;
        }
    }
    //printf("%d",large);

    cout << large;
}