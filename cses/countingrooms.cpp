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
string s[1001];
int mat[1001][1001];
int n,m;

void dfs(int i,int j){
	if(i<0||j<0||i>=n||j>=m){
		return;
	}
	if(mat[i][j]==1)
		return;
		
	mat[i][j]=1;
	dfs(i,j+1);
	dfs(i,j-1);
	dfs(i+1,j);
	dfs(i-1,j);
	
}
int main(){
	IOS;
	int i,j,cnt=0;
	cin >> n >> m;
	for(i=0;i<n;i++){
		cin >> s[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(s[i][j]=='.' )
				mat[i][j]=0;
			else
				mat[i][j]=1;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(mat[i][j]==0){
				cnt++;
				dfs(i,j);
			}
		}
	}
	cout << cnt<<endl;
}

