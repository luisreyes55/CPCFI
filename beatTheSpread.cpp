#include <stdio.h>
#include <math.h>

int main()
{
	int n, m, T;
	long long int a, b;
	
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d %d", &n, &m);
		if(m > n)
			printf("impossible\n");
		else {
			b = (n - m)/2;
			a = m + b;
			if(a + b == n && abs(a - b) == m)
				printf("%lld %lld\n", a, b);
			else
				printf("impossible\n");
		}
	}	
	return 0;
}


/*#include <iostream>
#include <math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    int cases;
    int sum;
    int abst;
    long long int a,b,score;
    cin >> cases;
    while(cases--){
        cin >> sum >> abst;
        if(abst > sum){
            cout << "impossible";
        }else{
            a = (sum+abst)/2;
            b = sum - a;
            score = a - b;
            if(abs(score) == abst && a + b == sum && b>0 && a>0){
                cout << a << " " << b << endl;
            }else{
                cout << "impossible";
            }
        }
    }

}*/