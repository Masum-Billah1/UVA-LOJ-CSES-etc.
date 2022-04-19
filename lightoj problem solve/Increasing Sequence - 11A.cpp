#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,d,i,s=0,temp;
	cin >> n >> d;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n-1;i++){
		if(a[i] >=a[i+1]){
			temp = ceil((a[i]-a[i+1]+1)/(d*1.0));
			s = s+temp;
			a[i+1] = a[i+1] + d*temp;
		}
	}
	cout << s << endl;
}
