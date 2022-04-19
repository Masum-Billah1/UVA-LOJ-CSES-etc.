#define ll long long
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,up,lb,t,i,j,result=0;
		cin >> n;
		vector<int>a(n);
		for(i=0;i<n;i++)
			cin >> a[i];
		sort(a.begin(),a.end());
		for(i=0;i<n;i++)
			cout << a[i]<<" ";
		cout << endl;
		while(a.size()!=0){
			if(a[a.size()-1]>0){
				t = a[i];
				while(t){
					cout <<"temp : "<<t<<endl;
					up = upper_bound(a.begin(),a.end(),t)-a.begin();
					lb = lower_bound(a.begin(),a.end(),t)-a.begin();
					cout <<"up : "<<up<<"lb : "<<lb<<endl;
					for(j=lb;j<=up;j++)
						a.pop_back();
					if(t%2 == 1)
						break;
					result++;
					t/=2;
				}
			}
		}
		for(i=0;i<n;i++)
			cout << a[i]<<" ";
		cout << endl;
	}
}

