#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,b,p,cc,bb,pp,s=0;
    cin >>  c >> b >> p;
    cin >> cc >> bb >> pp;

    if(c < cc)
        s = s+cc-c;
    if(b < bb)
        s = s+bb-b;
    if(p < pp)
        s = s+pp-p;

    cout << s <<endl;

}
