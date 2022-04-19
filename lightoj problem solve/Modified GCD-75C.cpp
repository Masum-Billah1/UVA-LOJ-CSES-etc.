#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int low,high,i,j=0;
	cin >> low >> high;
	if(low > high)
		swap(low,high);
	vector<int>flow,fhigh,gccd;
	for(i=1;i*i<=low;i++){
		if(i*i==low){
			flow.push_back(i);
		}
		else if(low%i==0){
			flow.push_back(i);
			flow.push_back(low/i);
		}
	}
	for(i=1;i*i<=high;i++){
		if(i*i==high){
			fhigh.push_back(i);
		}
		else if(high%i==0){
			fhigh.push_back(i);
			fhigh.push_back(high/i);
		}
	}
	sort(flow.begin(),flow.end());
	sort(fhigh.begin(),fhigh.end());
	for(i=0;i<flow.size();){
		if(flow[i]==fhigh[j]){
			gccd.push_back(flow[i]);
			j++;i++;
		}
		if(i==flow.size())
			break;
		while(flow[i]>fhigh[j]){
			j++;
		}
		while(flow[i]<fhigh[j]){
			i++;
		}
	}
	/*for(i=0;i<flow.size();i++){
		cout <<flow[i]<<" ";
	}cout <<endl;
	for(i=0;i<fhigh.size();i++){
		cout <<fhigh[i]<<" ";
	}cout <<endl;
	for(i=0;i<gccd.size();i++){
		cout <<gccd[i]<<" ";
	}cout <<endl;*/
	int test;
	cin >> test;
	while(test--){
		int low,high,i,ub;
		cin >> low >> high;
		ub = upper_bound(gccd.begin(),gccd.end(),high)-gccd.begin();
		if(gccd[ub-1] >= low){
			cout << gccd[ub-1] << endl;
		}
		else
			cout << -1 << endl;
	}
}
//Dedicated to Sumaiya Tasnim Fiha.
