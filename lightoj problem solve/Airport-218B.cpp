#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,mxm=0,mnm=0,temp,p;
	cin >> n >> m;
	p = n;
	int a[m];
	for(i=0;i<m;i++){
		cin >> a[i];
	}
	sort(a,a+m);
	for(i=0;i<m;i++){
		if(n>a[i]){
			mnm = mnm+(a[i]*(a[i]+1))/2;
			n = n-a[i];
		}
		else{
			temp = a[i]-n;
			mnm = mnm+(a[i]*(a[i]+1))/2;
			mnm = mnm-(temp*(temp+1)/2);
			break;
		}
	}
	while(p>0){
		sort(a,a+m);
		mxm = mxm+a[m-1];
		a[m-1]--;
		p--;
	}
	cout <<mxm <<" "<< mnm << endl;
}
