#define ll unsigned long long int
#define na 5000009
#include<bits/stdc++.h>
ll phi[na];
using namespace std;
int main(){
	ll i,j;
	phi[0] = 0;
	phi[1] = 1;
	for(i=2;i<=na;i++)
		phi[i] = i-1;
	for(i=2;i<=na;i++){
		for(j = 2*i;j<=na;j+=i){
			phi[j]-=phi[i];
		}
	}
	for(i=2;i<=na;i++){
		phi[i] = phi[i]*phi[i];
		phi[i] = phi[i]+phi[i-1];
	}
	ll test;
	cin >> test;
	for(i=0;i<test;i++){
		ll a,b,c;
		scanf("%llu%llu",&a,&b);
		printf("Case %llu: %llu\n",i+1,phi[b]-phi[a-1]);
	}
}

