#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,x,y,i;
	cin >> n >> m;
	int ar[n+1]={0};
	vector<int>v;
	pair<int,int>cn[m];
	for(i=0;i<m;i++){
		cin >> x >> y;
		if(x>y)
			swap(x,y);
		cn[i].first=x;
		cn[i].second=y;	
	} 
	sort(cn,cn+m);
	for(i=0;i<m;i++){
		cout << cn[i].first<<" "<<cn[i].second<<endl;
	}
	ar[cn[0].first]=1;
	ar[cn[0].second]=1;
	for(i=1;i<m;i++){
		if(ar[cn[i].first]==0 && ar[cn[i].second]==0){
			
			v.push_back(cn[i-1].second);
			v.push_back(cn[i].first);
		}
		ar[cn[i].first] = 1;
		ar[cn[i].second] = 1;
	}
	cout << v.size()/2<<endl;
	for(i=0;i<v.size();i+=2){
		cout << v[i]<<" "<<v[i+1]<<endl;
	}
}
