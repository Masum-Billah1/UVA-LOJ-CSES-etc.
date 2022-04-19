#define	 ll     long long
#define  seti   set<int>
#define  setl   set<ll>
#define  veci   vector<int>
#define  vecl   vector<ll>
#define  pus(a) push_back(a)
#define  pop()  pop_back()
#define  Min(v)   *min_element(v.begin(),v.end())
#define  Max(v)   *max_element(v.begin(),v.end())
#define  IOS    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
const int na = 1e5;
using namespace std;
int main(){
	IOS;
	ll a,b,m;
	while(scanf("%d %d %d", &a, &b, &m) == 3){
		ll apb = 1;
		a = a%m;
		while(b > 0){
			if(b & 1)
				apb = apb*a%m;
			b = b >> 1;
			a=a*a%m;
		}
		cout << apb << endl;
	}
	return 0;
}

