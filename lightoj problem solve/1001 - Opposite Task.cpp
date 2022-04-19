#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    int a[t];

    for(i=0;i<t;i++)
    {
        cin >> a[i];

        if(a[i]>10)
            cout <<a[i]%11+1<<" "<<10<<endl;
        else
            cout <<0<<" " <<a[i]<<endl;
    }
}
