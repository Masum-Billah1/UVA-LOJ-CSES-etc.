#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t,i;
	double a;
	cin >>a;
	t = a*100;
	
	t=t%100;
	
	cout <<"NOTAS:"<<endl;
	
	printf("%d nota(s) de R$ 100.00\n",int(a)/100);		
	a=int(a)%100;
	
	printf("%d nota(s) de R$ 50.00\n",int(a)/50);
	a=int(a)%50;
	
	printf("%d nota(s) de R$ 20.00\n",int(a)/20);
	a=int(a)%20;
	
	printf("%d nota(s) de R$ 10.00\n",int(a)/10);	
	a=int(a)%10;
	
	printf("%d nota(s) de R$ 5.00\n",int(a)/5);
	a=int(a)%5;
	
	printf("%d nota(s) de R$ 2.00\n",int(a)/2);
	a=int(a)%2;
	
	cout <<"MOEDAS:"<<endl;
	cout << a<<" moeda(s) de R$ 1.00\n";
	
	printf("%d moeda(s) de R$ 0.50\n",t/50);
	t = t%50;
	
	printf("%d moeda(s) de R$ 0.25\n",t/25);
	t = t%25;
	
	printf("%d moeda(s) de R$ 0.10\n",t/10);
	t = t%10;
	
	printf("%d moeda(s) de R$ 0.05\n",t/5);
	t = t%5;
	
	printf("%d moeda(s) de R$ 0.01\n",t);
	
	return 0;	
}
