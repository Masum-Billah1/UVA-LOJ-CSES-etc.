#include<bits/stdc++.h>
using namespace std;
int main(){
	int n , v,temp,left,tk=0,i;
	cin >> n >> v;
	n--;
	for(i=1;n>0;i++){
		temp = min(n,v);
		tk = tk + temp*i;
		n = n-temp;
		v=1;
	}
	cout << tk <<endl;
}
