#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin>>n;
        //Create array
        int week[n] ={0};

        //Parties
        int parties;
        cin >> parties;
        while(parties--){
            int hartal;
            cin >> hartal;
            for(int i=0; i<hartal; i++){
                int x;
                x = (hartal*(i+1))-1;
                if(x > n){
                    break;
                }else{
                    week[x] = 1;
                }
            }
            int o = 5;
            for(int i=0; i<n;i++){
                week[o] = -1;
                if(o+1>n){break;}
                week[o+1] = -1;
                o += 7;
                if(o>n){
                    break;
                }
            }

        }
        int days = 0;
            for(int i=0; i<n;i++){
                if(week[i]==1){
                    days++;
                }
            }
     /*   cout << "days" << endl;*/
        cout << days << endl;      

    }    

    return 0;
} 