#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int a,b,r=0,d,temp;
		cin >> a >> b;
		if(a<b)
			swap(a,b);
		d = a-b;
		temp = min(d,b);
		b = b-temp;
		if(b == 0){
			cout << temp << endl;
		}
		else
			cout << (temp+((b*2)/3))<<endl;
	}
}

