#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[10]={0},i,j,b,s = 0;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> b;
		a[b]++;
		s+=b;
	}
	if(s%3 == 2){
		if(a[2]!=0){
			a[2]--;
			s-=2;
		}
		else if(a[5]!=0){
			a[5]--;
			s-=5;
		}
		else if(a[8]!=0){
			a[8]--;
			s-=8;
		}
		if(s%3 == 2){
			int temp=2,c;
			c = min(temp,a[1]);
			a[1]-=c;
			s-=(c*1);
			temp-=c;
			c = min(temp,a[4]);
			a[4]-=c;
			s-=(c*4);
			temp-=c;
			c = min(temp,a[7]);
			a[7]-=c;
			s-=(c*7);
			temp-=c;
		}
	}
	else if(s%3 == 1){
		if(a[1]!=0){
			a[1]--;
			s--;
		}
		else if(a[4]!=0){
			a[4]--;
			s-=4;
		}
		else if(a[7]!=0){
			a[7]--;
			s-=7;
		}
		if(s%3 == 1){
			int temp=2,c;
			c = min(temp,a[2]);
			a[2]-=c;
			s-=(c*2);
			temp-=c;
			c = min(temp,a[5]);
			a[5]-=c;
			s-=(c*5);
			temp-=c;
			c = min(temp,a[8]);
			a[8]-=c;
			s-=(c*8);
			temp-=c;
		}
	}
	if(s == 0){
		cout << 0 << endl;
		return 0;
	}	
	if(s%3 == 0 && a[0]>0){
		for(i=9;i>=0;i--){
			for(j=a[i];j>0;j--){
				cout <<i;
			}
		}
	}
	else
		cout << -1 << endl;
}
//Dedicated to Sumaiya Tasnum Fiha.
