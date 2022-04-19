#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int phi(int n){
	int i,result=n;
	for(i=2;i*i<=n;i++){
		if(n%i==0){
			while(n%i == 0){
				n/=i;
			}
			result-=result/i;
		}
	}
	if(n>1)
		result-=result/n;
	return result;
}
int main(){
	while(1){
		int n;
		cin >> n;
		if(n == 1){
			cout << 0 << endl;
			continue;
		}
		if(n == 0)
			return 0;
		cout << phi(n)<<endl;
	}
}

