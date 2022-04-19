#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,x,m,up,doo;
		cin >> n >> x >> m;
		up = doo = x;
		while(m--){
			int a,b;
			cin >> a >> b;
			if(a <= doo && b >=doo){
				doo = min(doo,a);
			}
			if(b>=up && a<=up){
				up = max(up,b);
			}
		}
		cout << up-doo+1<<endl;
	}
}

