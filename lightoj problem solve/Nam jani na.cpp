#include<bits/stdc++.h>
using namespace std;
unsigned int a[10000000/32+1],d[664579];
int main(){
	int div,mod,i,j,c=0,result,way,temp;
	bool b;
	for(i=0;i<=10000000;i++){
		div = i/32;
		mod = i%32;
		a[div] = a[div]|(1 << mod);
	}

	for(i=2;i<=(int)sqrt(10000000);i++){
		for(j=2;i*j<=10000000;j++){
			temp = i*j;
			div = temp/32;
			mod = temp%32;
			b = a[div] & (1 << mod);
			if(b == 1){
				a[div] = a[div]-(1 << mod);
			}
		}
	}
	for(i=2;i<=10000000;i++){
		div = i/32;
		mod = i%32;
		bool b = a[div] &(1 << mod);
		if(b == 1){
			d[c] = i;
			c++;
		}
	}
	/*for(i=0;i<100;i++){
		cout << d[i]<<" ";
	}
	cout << endl;*/
	int test;
	cin >> test;
	temp = test;
	while(test--){
		way=0;
		int q;
		cin >> q;
		result = upper_bound(d,d+c,q)-d;
		for(j=0,i=result-1;j<=i;j++){
			if(d[i]+d[j] > q){
				while(d[i]+d[j]>q){
					i--;
				}
			}
			if(i<0)
				break;
			if(d[i]+d[j] == q){
				i--;
				way++;
			}
		}
		printf("Case %d: %d\n",temp-test,way);
	}
}
