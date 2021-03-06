#include <stdio.h>
#include <string.h>
int gcd(int x, int y) {
    int t;
    while(x%y)
        t = x, x = y, y = t%y;
    return y;
}
int getNumLen(int n) {
    char m[15];
    sprintf(m, "%d", n);
    return strlen(m);
}
int main() {
    int n;
    int cases = 0;
    while(scanf("%d", &n), n) {
        int i, x, y, sum = 0;
        for(i = 0; i < n; i++)
            scanf("%d", &x), sum += x;
        int flag = 1;
        if(sum < 0) flag = -1, sum *= -1;
        x = sum%n, y = n, sum /= n;
        int g = gcd(x, y);
        x /= g, y /= g;
        printf("Case %d:\n", ++cases);
        if(sum >= 1) {
            if(y == 1) {
                if(flag < 0)    printf("- ");
                printf("%d\n", sum);
            } else {
                int w = 0;
                if(flag < 0)    w += 2;
                w += getNumLen(sum)+getNumLen(y);
                for(i = w-getNumLen(x); i > 0; i--)  putchar(' ');
                printf("%d\n", x);
                if(flag < 0)    printf("- ");
                printf("%d", sum);
                for(i = getNumLen(y); i > 0; i--)   putchar('-');
                puts("");
                for(i = w-getNumLen(y); i > 0; i--) putchar(' ');
                printf("%d\n", y);
            }
        } else {
            if(y == 1) {
                if(flag < 0)
                    printf("- ");
                printf("%d\n", sum);
            } else {
                int w = 0;
                if(flag < 0)    w += 2;
                w += getNumLen(y);
                for(i = w-getNumLen(x); i > 0; i--)  putchar(' ');
                printf("%d\n", x);
                if(flag < 0)    printf("- ");
                for(i = getNumLen(y); i > 0; i--)   putchar('-');
                puts("");
                for(i = w-getNumLen(y); i > 0; i--) putchar(' ');
                printf("%d\n", y);
            }
        }

    }
    return 0;
}
/*#include <iostream>
#include <algorithm>
using namespace std;

int reduceFraction(int &x, int &y)
{
    int d;
    d = __gcd(x, y);
 
    x = x / d;
    y = y / d;
//    cout << "x = " << x << ", y = " << y << endl;
    return x,y;
    
}


int main(){

    int itera;
    
    int average,mod;
    int n = 0;
    int j = 0;

    cin >> itera;
    while(itera>0){
        int total = 0;
        for(int i=0; i<itera; i++){
        cin >> n;
        total += n;
        }
        //cout << "total: " << total << endl;
        //Average
        if(total%itera==0){
            average = (total/itera);
            if(average<0){
                average = abs(average);
                j++;
                cout << "Case " << j << ":" << endl;
                cout << "- " << average << endl;
            }else{ 
                j++;
                cout << "Case " << j << ":" << endl;
                cout << average << endl;
            }
        }else{
            average = (total/itera);
            mod = total%itera;
            reduceFraction(mod, itera);
            if(average<0){
                average = abs(average);
                j++;//cout << "a" << endl;  //j++;
                cout << "Case " << j << ":" << endl;
                cout << "   " << mod << endl;
                cout << "- " << average << "-" << endl;
                cout << "   " << abs(itera) << endl;
            }if(itera > 9 && average > 0){
                average = abs(average);
                j++;//cout << "b" << endl;  // j++;
                cout << "Case " << j << ":" << endl;
                cout << "  " << mod << endl;
                cout << average << "--" << endl;
                cout << " " << abs(itera) << endl;
            }if(itera > 9 && average < 0){
                average = abs(average);
                j++;//cout << "c" << endl;  //j++;
                cout << "Case " << j << ":" << endl;
                cout << "    " << mod << endl;
                cout << "- " << average << "--" << endl;
                cout << "   " << abs(itera) << endl;
            }if(average == 0 && itera > 0){
                j++;//cout << "d" << endl;  //j++;
                cout << "Case " << j << ":" << endl;
                cout << "" << mod << endl;
                cout << "-" << endl;
                cout << itera << endl;
            }if(average == 0 && itera < 0){
                j++;//cout << "e" << endl;  //j++;
                cout << "Case " << j << ":" << endl;
                cout << "  " << mod << endl;
                cout << "- -" << endl;
                cout << "  "<< abs(itera) << endl;
            }if(average < 0 && itera < 0){
                j++;//cout << "f" << endl;  //j++;
                cout << "Case " << j << ":" << endl;
                cout << "  " << mod << endl;
                cout << "- -" << endl;
                cout << "  "<< abs(itera) << endl;
            }if(average>0 && itera > 0 && itera < 10){
                j++;//cout << "g" << endl;  //j++;
                cout << "Case " << j << ":" << endl;
                cout << " " << mod << endl;
                cout << average << "-" << endl;
                cout << " " << itera << endl;
            }
        }cin >> itera;
    }    
        
}
   
*/